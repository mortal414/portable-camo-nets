# Validation - Portable Camo Nets 1.0.0

Verified with installed game and matching Tools **1.9.0.37**.

- Native production script validation and fresh minimal-addon packaging passed.
- The renamed cooked package passed **278 native assertions across sixteen design/style cases**: action/component serialization, missing-material gates, nearby/inventory materials, exact consumption/recovery, duplicate-callback protection, catalogs, wearability and loading into M151A2, M998, UAZ469 and UAZ452 cargo inventory.
- The two gameplay scripts are byte-identical to the preceding package that passed **47 native assertions across seven animation cases**: vanilla sandbag positive control, tool-free cancellation, US/Soviet shovel cancellation and completion, and switching the tool out of hand. Item-use ended after the normal standing transition, cancelled builds retained their materials, and completed builds consumed their kit and created the hide. Renaming changed the public title and item labels only; internal resource identifiers, recipes and script logic were retained.
- Native still frames were inspected for idle, digging and standing poses and the rolled-net/structure appearance. Native callbacks drove these tests. Full manual visual playback and ordinary keyboard/reticle dispatch on the animation patch remain unverified. The author reported successful hands-on play of the pre-animation private build.
- Each final test exited normally and released its exclusive runtime lease.

Second-client multiplayer and late join remain **not certified**. Stock assembly/replication authority is retained and no animation RPC was added, but that is not multiplayer test evidence. AI/thermal visibility, every terrain/mod combination, and construction beneath all foliage types are not certified.

Failed private fixture attempts were retained: an early cancellation check ran before the vanilla standing transition ended; the vanilla positive control failed the same early check. A custom spawn-helper fixture crashed during initialization against source and packed builds; stock spawn logic then passed against the unchanged production package. Native crash internals were not established. Base-game resource/shutdown warnings remain in private logs, so the release is not described as warning-free. QA, logs, dumps, private profiles, local launchers and test worlds do not ship.
