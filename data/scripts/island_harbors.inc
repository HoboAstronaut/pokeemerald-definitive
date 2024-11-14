.set LOCALID_SHIP, 1
.set LOCALID_SAILOR, 2

Island_Harbors_EventScript_GoToLilycove::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToOneIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_ONE_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToTwoIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_TWO_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToThreeIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_THREE_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToFourIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_FOUR_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToFiveIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_FIVE_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToSixIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_SIX_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToSevenIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_SEVEN_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	

Island_Harbors_EventScript_BoardFerry1::
	msgbox Island_Harbors_Text_PleaseBoard, MSGBOX_DEFAULT
	closemessage
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	removeobject LOCALID_SAILOR
	waitmovement 0
	setvar VAR_0x8004, LOCALID_SHIP
	call Common_EventScript_FerryDepart
	return

Island_Harbors_Movement_1Down::
	walk_down
	step_end
	
Island_Harbors_Text_PleaseBoard:
	.string "Alright, off we go!$"

Island_Harbors_Text_Oi_Chap::
	.string "Oi, chap! Were're we going today?$"
