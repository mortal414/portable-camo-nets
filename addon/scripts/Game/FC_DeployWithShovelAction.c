// Optional animation only. Assembly, previews, timing, materials and authority remain vanilla.
// Stock SCR_DeployMultiPartInventoryItemAction skips CMD_Item_Action when its
// required gadget is NONE. Reuse its complete BUILDING_TOOL animation/cleanup
// path during the local held-shovel action, then restore the configured NONE.
class FC_DeployWithShovelAction : SCR_DeployMultiPartInventoryItemAction
{
 protected IEntity m_FCAnimationUser;
 protected bool m_FCUseShovelAnimation;

 protected bool CanAnimateHeldShovel(IEntity user)
 {
  if (m_eRequiredGadget != EGadgetType.NONE || m_bReportAsDismantling || !m_DeployableItemComp)
   return false;
  if (SCR_PlayerController.GetLocalControlledEntity() != user)
   return false;
  ChimeraCharacter character = ChimeraCharacter.Cast(user);
  if (!character)
   return false;
  CharacterControllerComponent controller = character.GetCharacterController();
  if (!controller || !controller.GetHeadAimingComponent() || !controller.CanUseItem() || controller.IsChangingStance())
   return false;
  SCR_GadgetManagerComponent manager = SCR_GadgetManagerComponent.GetGadgetManager(user);
  if (!manager)
   return false;
  SCR_GadgetComponent gadget = manager.GetHeldGadgetComponent();
  return gadget && manager.GetHeldGadget() && gadget.GetType() == EGadgetType.BUILDING_TOOL && gadget.GetMode() == EGadgetMode.IN_HAND;
 }

 protected bool IsAnimatingFor(IEntity user)
 {
  return m_FCUseShovelAnimation && m_FCAnimationUser == user;
 }

 override void OnActionStart(IEntity pUserEntity)
 {
  // Remote callbacks cannot overwrite another local user's animation tracking.
  if (SCR_PlayerController.GetLocalControlledEntity() == pUserEntity)
  {
   m_FCUseShovelAnimation = CanAnimateHeldShovel(pUserEntity);
   m_FCAnimationUser = null;
   if (m_FCUseShovelAnimation)
    m_FCAnimationUser = pUserEntity;
  }
  EGadgetType configured = m_eRequiredGadget;
  if (IsAnimatingFor(pUserEntity))
   m_eRequiredGadget = EGadgetType.BUILDING_TOOL;
  super.OnActionStart(pUserEntity);
  m_eRequiredGadget = configured;
 }

 override bool CanBePerformedScript(IEntity user)
 {
  // While digging, retain stock tool-in-hand and stance interruption checks.
  // Outside that local action, the original tool-free availability is untouched.
  EGadgetType configured = m_eRequiredGadget;
  if (IsAnimatingFor(user))
   m_eRequiredGadget = EGadgetType.BUILDING_TOOL;
  bool allowed = super.CanBePerformedScript(user);
  m_eRequiredGadget = configured;
  return allowed;
 }

 override void OnActionCanceled(IEntity pOwnerEntity, IEntity pUserEntity)
 {
  bool animationUser = IsAnimatingFor(pUserEntity);
  EGadgetType configured = m_eRequiredGadget;
  if (animationUser)
   m_eRequiredGadget = EGadgetType.BUILDING_TOOL;
  // Vanilla resets deployment state and calls StopAction/FinishItemUse here.
  super.OnActionCanceled(pOwnerEntity, pUserEntity);
  m_eRequiredGadget = configured;
  if (animationUser)
  {
   m_FCUseShovelAnimation = false;
   m_FCAnimationUser = null;
  }
 }

 override void PerformAction(IEntity pOwnerEntity, IEntity pUserEntity)
 {
  // Vanilla already finishes item use before its authoritative material recheck.
  super.PerformAction(pOwnerEntity, pUserEntity);
  if (IsAnimatingFor(pUserEntity))
  {
   m_FCUseShovelAnimation = false;
   m_FCAnimationUser = null;
  }
 }

 override void OnActionDeselected()
 {
  // Vanilla also stops a started local action when selection/entity goes away.
  super.OnActionDeselected();
  m_FCUseShovelAnimation = false;
  m_FCAnimationUser = null;
 }
}
