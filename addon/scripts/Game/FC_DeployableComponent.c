// Original Fieldcraft extension. Vanilla owns assembly, consumption, recovery and replication.
[ComponentEditorProps(category: "Fieldcraft", description: "Allows camouflage deployment around parked vehicles.")]
class FC_DeployableComponentClass : SCR_MultiPartDeployableItemComponentClass {}
class FC_DeployableComponent : SCR_MultiPartDeployableItemComponent
{
 protected bool m_FCCommitted;
 override void Deploy(int variantId, IEntity userEntity = null, vector direction = vector.Zero, bool reload = false, bool state = true)
 {
  // Recovery reports state=false in vanilla. Lock a completed replacement as well,
  // so duplicate callbacks before delayed owner deletion cannot refund twice.
  if (m_FCCommitted) return;
  super.Deploy(variantId, userEntity, direction, reload, state);
  if (m_ReplacementEntity) m_FCCommitted = true;
 }
 override bool FilterTracedEntities(notnull IEntity e, vector start = "0 0 0", vector dir = "0 0 0")
 {
  // Canopies surround vehicles. Terrain, structures and other nets still obstruct placement.
  if (Vehicle.Cast(e.GetRootParent())) return false;
  return super.FilterTracedEntities(e, start, dir);
 }
}
