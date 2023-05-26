# Portaled
Client-Side Content Driver for the Asheron's Call MMORPG

May 2023 note: Project has been idle, but I'm here - Have some new ideas for this but not the time to do it. Main challenge that stopped this in 2020 was the very outdated tooling that Decal uses, and I could not find a working method in my spare time to hook most of the game client functions needed. Here are a few tools that look promising (and I'm totally cool with adopting a GPL license if needed): 

https://github.com/goatcorp/FFXIVQuickLauncher/tree/master

https://github.com/xivdev/Penumbra

https://github.com/goatcorp/goatcorp.Reloaded.Hooks

https://github.com/goatcorp/goatcorp.Reloaded.Memory.Buffers

https://github.com/goatcorp/FFXIVClientStructs/tree/main/ida



----
This project is in a VERY EARLY phase. The code will not look nice, and you may have a hard time getting it to work without some technical knowledge. The project is in need of volunteers who want to help expand and improve the capabilities.

We will be able to change or add new textures, sounds, models, buildings, dungeons, and skills to the game, all without requiring the player to modify any DAT file. Only a Decal plugin will be required. And the dependency on Decal itself is extremely light still, as all of the Hooks are done without the help of Decal, so it may not even require Decal eventually (perhaps integration with a launcher or something instead). 


![](https://i.imgur.com/hpj4cBE.png)
