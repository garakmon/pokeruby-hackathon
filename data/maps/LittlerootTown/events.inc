LittlerootTown_EventObjects::
	object_event 1, EVENT_OBJ_GFX_DUSKULL_DOLL, 0, 9, 9, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 12, 12, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, FallFestival_Stand_A, FLAG_HIDE_FESTIVAL_STAND_A
	object_event 3, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 12, 14, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, FallFestival_Stand_B, FLAG_HIDE_FESTIVAL_STAND_B
	object_event 4, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 15, 12, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, FallFestival_Stand_C, FLAG_HIDE_FESTIVAL_STAND_C
	object_event 5, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 15, 14, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, FallFestival_Stand_D, FLAG_HIDE_FESTIVAL_STAND_D
	object_event 6, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 15, 16, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, FallFestival_Stand_E, FLAG_HIDE_FESTIVAL_STAND_E
	object_event 7, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 12, 16, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, FallFestival_Stand_F, FLAG_HIDE_FESTIVAL_STAND_F

LittlerootTown_MapWarps::
	warp_def 5, 4, 3, 0, MAP_MAUVILLE_CITY_GYM

LittlerootTown_MapBGEvents::
	bg_event 13, 9, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_Sign_StartHacking

LittlerootTown_MapEvents::
	map_events LittlerootTown_EventObjects, LittlerootTown_MapWarps, 0x0, LittlerootTown_MapBGEvents
