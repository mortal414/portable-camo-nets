# Validation — 1.0.0 release candidate

Verified on installed game and matching Tools **1.9.0.37**.

- Native production script validation and fresh minimal-addon packaging passed.
- The actual cooked release package passed **278 native assertions across sixteen design/style cases**: serialized actions, missing-material gates, nearby/inventory materials, exact consumption and recovery, duplicate-callback protection, catalogs, wearability and loading into M151A2, M998, UAZ469 and UAZ452 cargo inventory.
- The same cooked package passed **47 native assertions across seven animation cases**: vanilla sandbag positive control, bare-handed cancellation, US and Soviet shovel cancellation/completion, and switching the tool out of hand. Completed actions consumed their kit and created the hide; cancellation retained the kit. Item-use ended after the normal standing transition, and tool-free configuration was restored.
- Native still frames were inspected for idle, digging and standing poses and the rolled-net/structure appearance. Native callbacks drove these deterministic tests; the full visual sequence and ordinary keyboard/reticle action dispatch on the animation patch have not been independently verified. The author previously reported successful hands-on play of the pre-animation private build.
- Each final native run exited normally and released its exclusive runtime lease.

Multiplayer with a second client and late join remain **not certified**. Fieldcraft retains stock assembly/replication authority and adds no animation RPC, but that is not a multiplayer test result. Construction beneath foliage, AI visibility, thermal behavior and every terrain/mod combination have not been certified.

Failed fixture attempts were retained privately. An early cancellation assertion ran before the vanilla standing transition finished; the vanilla positive control failed the same early check. A custom spawn-helper fixture crashed during initialization against both source and packed addons. A fixture using stock spawn logic passed against the unchanged production package; the crash's native internals were not established. Base-game resource/shutdown warnings remain in private logs; the release is not described as warning-free. Test fixtures, logs, dump files and local launchers are excluded from this repository and the Workshop addon.
