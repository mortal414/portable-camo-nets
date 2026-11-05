# Release size audit - Portable Camo Nets 1.0.0

Only addon dependency: vanilla Arma Reforger (`58D0FB3206B6F859`).

## Native-tested cooked addon

**51,991 bytes in three files**, before Workshop manifest generation:

| File | Bytes |
|---|---:|
| `data.pak` | 49,766 |
| `Fieldcraft.gproj` | 214 |
| `resourceDatabase.rdb` | 2,011 |

The PAK contains exactly **22 resources**: eighteen item/structure prefabs, two catalog deltas and two authored gameplay scripts. It contains no copied vanilla meshes, textures, materials or icon files; no QA, worlds, logs, profiles, dumps, caches, local launchers or extracted reference data. The project descriptor and resource database are required runtime metadata.

| PAK resource | Stored bytes |
|---|---:|
| `Configs/EntityCatalog/US/InventoryItems_EntityCatalog_US.conf` | 460 |
| `Configs/EntityCatalog/USSR/InventoryItems_EntityCatalog_USSR.conf` | 462 |
| `Prefabs/Fieldcraft/FC_NetPack_US.et` | 8,927 |
| `Prefabs/Fieldcraft/FC_NetPack_USSR.et` | 8,953 |
| `Prefabs/Fieldcraft/Structures/FC_Bivouac_US.et` | 1,855 |
| `Prefabs/Fieldcraft/Structures/FC_Bivouac_USSR.et` | 1,877 |
| `Prefabs/Fieldcraft/Structures/FC_Cache_US.et` | 1,686 |
| `Prefabs/Fieldcraft/Structures/FC_Cache_USSR.et` | 1,706 |
| `Prefabs/Fieldcraft/Structures/FC_Large_US.et` | 1,831 |
| `Prefabs/Fieldcraft/Structures/FC_Large_USSR.et` | 1,853 |
| `Prefabs/Fieldcraft/Structures/FC_Medium_US.et` | 1,834 |
| `Prefabs/Fieldcraft/Structures/FC_Medium_USSR.et` | 1,856 |
| `Prefabs/Fieldcraft/Structures/FC_Observation_US.et` | 1,708 |
| `Prefabs/Fieldcraft/Structures/FC_Observation_USSR.et` | 1,728 |
| `Prefabs/Fieldcraft/Structures/FC_Screen_US.et` | 1,683 |
| `Prefabs/Fieldcraft/Structures/FC_Screen_USSR.et` | 1,703 |
| `Prefabs/Fieldcraft/Structures/FC_Small_US.et` | 1,659 |
| `Prefabs/Fieldcraft/Structures/FC_Small_USSR.et` | 1,679 |
| `Prefabs/Fieldcraft/Structures/FC_TallScreen_US.et` | 1,676 |
| `Prefabs/Fieldcraft/Structures/FC_TallScreen_USSR.et` | 1,696 |
| `scripts/Game/FC_DeployableComponent.c` | 592 |
| `scripts/Game/FC_DeployWithShovelAction.c` | 1,153 |

PAK SHA-256: `766444126fb63c2ad3689ff6cb073850a1d0a9ecc78f97e3ba3605c8acc7bd03`.

## Public repository and promotional images

Published Git content: **66749 bytes in 53 files**, excluding Git metadata. Git normalizes text line endings; the local working export is **67980 bytes**. Production authoring source before that normalization: **53713 bytes in 43 files**, including metadata.

The two optional native screenshots total **492,450 bytes**: preview 248,818 bytes and gallery image 243,632 bytes. They retain their original 1280 x 720 dimensions without changing scene content. They are promotional files, separate from the runtime core and absent from this source repository.

## Workshop bundle

The renamed final Workshop bundle will be audited and its measured file inventory recorded here before release. No server-side download size is claimed before verification.
