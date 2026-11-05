# Resource provenance

Portable Camo Nets adds construction gameplay and new item/prefab configuration. **It does not add original building geometry, textures or icon art.**

The sixteen structure prefabs under `addon/Prefabs/Fieldcraft/Structures/` inherit the following existing vanilla families under `Prefabs/Structures/Military/CamoNets/US/` and `Prefabs/Structures/Military/CamoNets/Soviet/`:

- `CamoNet_Small_US.et` / `CamoNet_Small_Soviet.et`
- `CamoNet_Medium_US.et` / `CamoNet_Medium_Soviet.et`
- `CamoNet_Large_US.et` / `CamoNet_Large_Soviet.et`
- `CamoNet_Wall_medium_US.et` / `CamoNet_Wall_medium_Soviet.et`
- `CamoNet_Wall_high_US.et` / `CamoNet_Wall_high_Soviet.et`
- `CamoNet_ObservationPost_US.et` / `CamoNet_ObservationPost_Soviet.et`
- `CamoNet_AmmoCache_US.et` / `CamoNet_AmmoCache_Soviet.et`
- `CamoNet_Tent_US.et` / `CamoNet_Tent_Soviet.et`

For example, `FC_Medium_US.et` inherits `{B89C671B75B43849}Prefabs/Structures/Military/CamoNets/US/CamoNet_Medium_US.et`.

Both authored bundle items use `{CF7BC644B0B84580}Assets/Structures/Military/CamoNets/CamoNet_Folded.xob` as `MeshObject.Object` and `BaseLoadoutClothComponent.ItemModel`. Its materials and textures are unchanged vanilla resources. The inventory image uses `PreviewRenderAttributes` (`Front`, camera distance `1.5`); no custom icon image is supplied. The worn carry model is the inherited `Assets/Items/Equipment/Backpacks/Backpack_TeamWeaponBag/Backpack_TeamWeaponBag.xob`.

Soviet camouflage materials are inherited from the vanilla Soviet prefabs, including resources under `Assets/Structures/Military/CamoNets/Data/` such as `CamoNet_01_fabric_MKT.emat`, `CamoNet_01_Pole_MKT.emat`, and `CamoNet_01_double_MKT.emat`.

The original code extends vanilla `SCR_MultiPartDeployableItemComponent` and `SCR_DeployMultiPartInventoryItemAction`. Native engine APIs own deployment, item-use animation and replication. The optional shovel action reuses the stock building-tool path; it does not provide a custom animation file.

The original internal project ID `MarcoFieldcraft`, project filename `Fieldcraft.gproj`, `Prefabs/Fieldcraft/` resource paths, resource GUIDs and `FC_` script namespace are retained for compatibility. The public project and item names are **Portable Camo Nets**.
