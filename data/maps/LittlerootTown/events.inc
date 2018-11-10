LittlerootTown_EventObjects::
	object_event 1, EVENT_OBJ_GFX_DUSKULL_DOLL, 0, 25, 9, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 10, 15, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, FallFestival_Stand_A, 0
	object_event 3, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 10, 16, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, FallFestival_Stand_B, 0
	object_event 4, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 19, 18, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, FallFestival_Stand_C, 0
	object_event 5, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 19, 19, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, FallFestival_Stand_D, 0
	object_event 6, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 10, 21, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, FallFestival_Stand_E, 0
	object_event 7, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 10, 22, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, FallFestival_Stand_F, 0

LittlerootTown_MapWarps::
	warp_def 15, 3, 3, 0, MAP_MAUVILLE_CITY_GYM
	warp_def 14, 3, 3, 0, MAP_MAUVILLE_CITY_GYM

LittlerootTown_MapBGEvents::
	bg_event 13, 9, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_Sign_StartHacking

LittlerootTown_MapEvents::
	map_events LittlerootTown_EventObjects, LittlerootTown_MapWarps, 0x0, LittlerootTown_MapBGEvents
