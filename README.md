This is a romhack of Pokemon Emerald using pret's decompilation project for the game.

You build it the same as you do any other decomp based hack. Check their install.md for details if you don't know.

Currently this is an incomplete build, with the Sevii Islands partially complete as maps, and a large chunk of Kanto's exteriors. You can reach them via a disembodied door in Petalburg City. From there, the debug map can take you to any complete or mostly complete exterior town. The white path indicates that a route is pretty much set, with minimal adjustments needed. Doors lead you directly to the corresponding town. Grass paths indicate either in-progress, or in the case of Three Isle Path and Trainer Tower's interiors, maps that aren't implemented yet. Blacked out means no maps in the corresponding section. I gave parts of Johto collision because they don't have map sections yet; I am out of space and need to rename ones that will go unused. Routes 44-46, Dragon's Den, Ice Path, and Blackthorn City.

Encounters are partially complete, as are warps. Ferry functionality is currently nil, but you can use fly from any of the outdoor maps back to Petalburg. Make sure to pack repels, escape ropes, Dig, and whatever else you might need. 

For that reason, I recommend using a save file that at least has Surf to explore fully, and Fly to get back to Hoenn.
Region maps aren't functional yet, so each outdoor map just shows up like you're in the top left corner of the map.
For the moment, vanilla saves function well. If need be, I will try to provide a save file for exploring when future commits that add more trainers alter the saveblock.

Credits (besides myself)

AutumnMood- custom tileset for Icefall Cave (and Seafoam Islands when I get that far). She cooked like crazy.
MezmerKaiser- Most of the custom music I intend to add; Johto remixes of tracks not present in the whole Gen 3 OST. It doesn't cover everything, I think, but her work is excellent and absolutely worth using.
SDH- Coding solutions for various conundrums. Particularly for setting different battle music for the various regions, and at least one GSC remix that wasn't used from Kaiser's collection of remixes on Youtube.
AbsolianGW/Volkornzombie- His multi-region map system I plan to eventually implement. Check out ReEmerald when you get a chance, it's a similar project with a smaller scope, but further along.
Pret- Without the decomp, none of this would be possible. I'd be stuck using binary, and pulling my hair out on various minutiae.