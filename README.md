# Portable Camo Nets

Portable, recoverable camouflage construction for **Arma Reforger**.

Portable Camo Nets is available on the Arma Reforger Workshop. This repository contains the **1.0.0 source**.

Carry net bundles on your back or in ordinary vehicle inventory, drop a bundle, and deploy a hide. Extra matching bundles can be within five metres or in the builder's inventory. Pack the structure away to recover the bundles. No construction truck is required.

## Equipment

Each bundle weighs **12 kg**, occupies **20 L**, and is configured to cost **80 supplies**, with no rank lock. US LCSS and Soviet MKT bundles are separate styles. Small, medium and large hides use **1, 2 and 3 bundles** respectively.

| Design | Bundles | Assembly | Purpose |
|---|---:|---:|---|
| ACORN | 1 | 12 s | Small hide |
| CARPORT | 2 | 20 s | Medium vehicle hide |
| MOTORPOOL | 3 | 30 s | Large vehicle hide |
| VEIL | 1 | 8 s | Low screen |
| CURTAIN | 1 | 10 s | High screen |
| LOOKOUT | 1 | 14 s | Observation hide |
| STASH | 1 | 10 s | Cover for existing supplies |
| BIVOUAC | 2 | 22 s | Field camp cover |

Stock engineer assembly-speed bonuses apply. No shovel is required; when a ready shovel is equipped, Portable Camo Nets uses the vanilla shovel building-animation path. Cancelling a build should retain its materials. Cache and camp covers do not create ammunition, spawn points or arsenals.

## Installation and use

Enable Portable Camo Nets in Arma Reforger and add it to the server's mod list when playing multiplayer. The only addon dependency is the vanilla game. Packs appear in the US and Soviet equipment catalogs. Other mods that replace those catalogs may need compatibility work.

Use the deployment preview to check roof and pole clearance. Deployed hides are stationary; they do not attach to moving vehicles. The configured slope limit is fifteen degrees. Nets inherit vanilla materials and destruction behavior. They do not grant scripted invisibility, guaranteed AI concealment or thermal suppression.

## Art and authorship

**The nets, tents, screens, rolled bundle model and their textures are existing Bohemia Interactive assets.** Portable Camo Nets authors the item/prefab configuration and construction gameplay: portability, recipes, recovery, inventory/arsenal settings, presentation and optional shovel-animation integration. It contains no new original mesh, texture or hand-drawn icon artwork and redistributes no vanilla art files. The inventory image is a game-rendered preview of the existing rolled-net model.

See [exact resource provenance](docs/PROVENANCE.md), [validation and limitations](docs/VALIDATION.md), and [release size audit](docs/SIZE-AUDIT.md).

## Issues and source

Report reproducible problems at **https://github.com/mortal414/portable-camo-nets/issues**. Include the Portable Camo Nets/game versions, relevant server mods, steps, and expected versus actual behavior. Redact private data from any attachments. This repository stores the mod source and issue-reporting workflow; it excludes local profiles, logs, credentials, caches, test worlds and machine-specific launchers.

## Development

Open `addon/Fieldcraft.gproj` in matching Arma Reforger Tools. Source resources reference the installed vanilla game; no base-game extraction is needed. Build and test privately before publishing. The retained dependency GUID is `58D0FB3206B6F859` (Arma Reforger).

The authored code and configuration are licensed under the [Arma Public License](https://portal.bohemia.net/community/licenses/arma-public-license). Bohemia assets and APIs remain subject to their applicable terms; see [NOTICE](NOTICE.md).
