# Release size audit

Initial public candidate 1.0.0. Core addon dependency: vanilla Arma Reforger only (`58D0FB3206B6F859`). No Workshop dependencies.

## Native cooked addon

**51,823 bytes in three files** before Workshop-specific manifest/ZIP generation:

| File | Bytes |
|---|---:|
| `data.pak` | 49,606 |
| `Fieldcraft.gproj` | 206 |
| `resourceDatabase.rdb` | 2,011 |

The PAK index contains exactly **22 resources**: eighteen Fieldcraft item/structure prefabs, two catalog deltas and two authored gameplay scripts. No copied geometry, textures, materials, icon images, test worlds, QA scripts, private profiles, logs, dumps, caches, machine-specific launchers or extracted reference files. `resourceDatabase.rdb` and the project descriptor are required runtime metadata.

| PAK resource | Stored bytes |
|---|---:|
| `Configs/EntityCatalog/US/InventoryItems_EntityCatalog_US.conf` | 460 |
| `Configs/EntityCatalog/USSR/InventoryItems_EntityCatalog_USSR.conf` | 462 |
| `Prefabs/Fieldcraft/FC_NetPack_US.et` | 8,911 |
| `Prefabs/Fieldcraft/FC_NetPack_USSR.et` | 8,937 |
| `Prefabs/Fieldcraft/Structures/FC_Bivouac_US.et` | 1,847 |
| `Prefabs/Fieldcraft/Structures/FC_Bivouac_USSR.et` | 1,869 |
| `Prefabs/Fieldcraft/Structures/FC_Cache_US.et` | 1,678 |
| `Prefabs/Fieldcraft/Structures/FC_Cache_USSR.et` | 1,698 |
| `Prefabs/Fieldcraft/Structures/FC_Large_US.et` | 1,823 |
| `Prefabs/Fieldcraft/Structures/FC_Large_USSR.et` | 1,845 |
| `Prefabs/Fieldcraft/Structures/FC_Medium_US.et` | 1,826 |
| `Prefabs/Fieldcraft/Structures/FC_Medium_USSR.et` | 1,848 |
| `Prefabs/Fieldcraft/Structures/FC_Observation_US.et` | 1,700 |
| `Prefabs/Fieldcraft/Structures/FC_Observation_USSR.et` | 1,720 |
| `Prefabs/Fieldcraft/Structures/FC_Screen_US.et` | 1,675 |
| `Prefabs/Fieldcraft/Structures/FC_Screen_USSR.et` | 1,695 |
| `Prefabs/Fieldcraft/Structures/FC_Small_US.et` | 1,651 |
| `Prefabs/Fieldcraft/Structures/FC_Small_USSR.et` | 1,671 |
| `Prefabs/Fieldcraft/Structures/FC_TallScreen_US.et` | 1,668 |
| `Prefabs/Fieldcraft/Structures/FC_TallScreen_USSR.et` | 1,688 |
| `scripts/Game/FC_DeployableComponent.c` | 592 |
| `scripts/Game/FC_DeployWithShovelAction.c` | 1,153 |

## Repository and images

Public Git source/docs/issue templates: **66580 bytes in 52 files**, excluding Git metadata. Git normalizes text line endings. The local working export is **67817 bytes**. Production source before Git line-ending normalization: **53545 bytes in 43 files** (including source metadata). Optional documentation is separate from the cooked addon.

Workshop-only JPEGs: **492,450 bytes** (FC-range-player.jpg: 243632, FC-range-showcase.jpg: 248818). These are actual native screenshots exported at original 1280 x 720 dimensions without changing scene content. They are separate promotional uploads, not addon art or required game downloads.

## Actual prepared Workshop bundle

Workbench's final pre-upload bundle validates successfully. It has **544,238 bytes in five upload files**, plus a **3,952-byte manifest**: **548,190 bytes in six local files**. The upload has not been confirmed and no server-side download is claimed.

| File | Bytes |
|---|---:|
| `data.pak` | 49,606 |
| `Fieldcraft.gproj` | 206 |
| `resourceDatabase.rdb` | 1,976 |
| `previewImage.jpg` | 248,818 |
| `screenshot0.jpg` | 243,632 |
| `manifest.json` | 3,952 |

The final runtime core is **51,788 bytes**. The PAK and project descriptor hashes match the native-tested cooked addon; the publisher regenerated the resource database (1,976 versus 2,011 bytes). A readable-string comparison shows the project-descriptor resource entry omitted from that index. The two JPEGs are the only large optional promotional files. All manifest file sizes and SHA-256 hashes were checked against the actual bundle; it contains no local paths, credentials or diagnostic data.

`data.pak` SHA-256: `62595519558cb58a978e06d7a0989c1b167abd9e3f604fd251d183f42572fd6b`.

Workshop compression and hosting can affect the service-reported size. The final server-side download remains unverified.
