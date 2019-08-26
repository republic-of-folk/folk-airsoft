Republic of Folk Airsoft
===============================================================================
*version 1.0.0*

We present you the newest novelty toy from the remote island republic that normally you'd associate with ~~cheap~~ reasonably priced electronics - airsoft gun replicas! Aimed at adults and children of all ages*, with accuracy guaranteed up to 35 meters, these aifsoft gun replicas provide realistic military fun compared to no other toy.

*Republic of Folk Airsoft* replicas provide:

* A collection of realistic looking gun replicas
* Both realistic and high capacity magazines
* A pack of safe to play 6mm plastic pellets 

_* Safety hazard: __never__ aim your airsoft replica at other people nor animals!_


## Requirements

Arma 3 v1.94
Currently *Republic of Folk Airsoft* requires no additional mods to work.


## Installation

If you're not using [Steam Workshop version](https://steamcommunity.com/sharedfiles/filedetails/?id=1846060911), simply download the [latest version](https://github.com/republic-of-folk/folk-airsoft/releases) and unpack it in your Arma 3 installation folder. Then launch Arma 3 with `-mod=@folk_airsoft` parameter.


## Safety hazard

*Republic of Folk Airsoft* comes with standard plastic pellets and lethal ammunition. Both have same ballistic properties (or lack those) but standard version causes no damage at all and needs to be scripted in the mission.


## Shameless plug

If you want to play with us, you might want to check our website: https://republicoffolk.org

We might not use airsoft replicas of a daily basis, but if you're lucky we'll let you drive a BMP. They you'll pay for the damages you'll cause.


## Building your own replica

This addon provides two types of ammunition: `rof_B_6mm_020g_bb` and `rof_B_6mm_020g_lethal`.

When working on your mod, add requirement for `rof_weapons_airsoft_core` and create magazines that use one of these ammo classes and has attribute `initSpeed = 107;` (which gives you 350fps muzzle velocity), and `tracersEvery = 1;` (so pellets are visible in flight).


## Changelog

### v1.0.0 - 26.08.2019

#### Added

* Base ammo classes in lethal and non-lethal versions.
* P90 SMG in 4 texture variants (as in vanilla). 50, 100 and 300 round magazines for it.
* P99 pistol and 16 round magazines for it.





## Disclaimer

File `build.exe` uses [SwiftPBO library](https://github.com/headswe/SwiftPbo). 

You can see it's source [here](https://github.com/republic-of-folk/rof_addons_build).


## Links

* [Steam Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=1846060911)
* [BI Forums](https://forums.bohemia.net/forums/topic/225125-republic-of-folk-airsoft-realistic-military-action-at-35-meters-range/)
* [Github](https://github.com/republic-of-folk/folk-airsoft/releases)


## License

**[Arma Public License Share Alike (APL-SA)](https://www.bohemia.net/community/licenses/arma-public-license-share-alike)**

Brief summary of this Licence:

*PLEASE, NOTE THAT THIS SUMMARY HAS NO LEGAL EFFECT AND IS ONLY OF AN INFORMATORY NATURE DESIGNED FOR YOU TO GET THE BASIC INFORMATION ABOUT THE CONTENT OF THIS LICENCE. THE ONLY LEGALLY BINDING PROVISIONS ARE THOSE IN THE ORIGINAL AND FULL TEXT OF THIS LICENCE.*

With this licence you are free to adapt (i.e. modify, rework or update) and share (i.e. copy, distribute or transmit) the material under the following conditions:

* Attribution - You must attribute the material in the manner specified by the author or licensor (but not in any way that suggests that they endorse you or your use of the material).
* Noncommercial - You may not use this material for any commercial purposes.
* Arma Only - You may not convert or adapt this material to be used in other games than Arma.
* Share Alike - If you adapt, or build upon this material, you may distribute the resulting material only under the same license.
