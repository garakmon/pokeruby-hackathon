LittlerootTown_EventObjects::
	object_event 1, EVENT_OBJ_GFX_DUSKULL_DOLL, 0, 25, 9, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, Festival_Duskull, 0
	object_event 2, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 10, 15, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, FallFestival_Stand_A, 0
	object_event 3, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 10, 16, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, FallFestival_Stand_B, 0
	object_event 4, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 19, 18, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, FallFestival_Stand_C, 0
	object_event 5, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 19, 19, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, FallFestival_Stand_D, 0
	object_event 6, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 10, 21, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, FallFestival_Stand_E, 0
	object_event 7, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 10, 22, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, FallFestival_Stand_F, 0
	object_event 8, EVENT_OBJ_GFX_BEAUTY, 0, 9, 9, 3, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 0, 0, FALSE, 0, Festival_Beauty, 0
	object_event 9, EVENT_OBJ_GFX_ARTIST, 0, 24, 4, 3, MOVEMENT_TYPE_FACE_DOWN_LEFT_AND_RIGHT, 0, 0, FALSE, 0, Festival_Artist, 0
	object_event 10, EVENT_OBJ_GFX_BUG_CATCHER, 0, 11, 3, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, Festival_Bug_Catcher, 0
	object_event 11, EVENT_OBJ_GFX_BLACK_BELT, 0, 16, 16, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, Festival_Black_Belt, 0
	object_event 12, EVENT_OBJ_GFX_HOT_SPRINGS_OLD_WOMAN, 0, 23, 18, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, Festival_Pumpkin_Lady, 0
	object_event 13, EVENT_OBJ_GFX_BOY_2, 0, 16, 21, 3, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT, 0, 0, FALSE, 0, Festival_Boy_2, 0
	object_event 14, EVENT_OBJ_GFX_BOY_1, 0, 17, 21, 3, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 0, 0, FALSE, 0, Festival_Boy_1, 0
	object_event 15, EVENT_OBJ_GFX_BOY_3, 0, 16, 23, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, Festival_Boy_3, 0
	object_event 16, EVENT_OBJ_GFX_LITTLE_BOY_3, 0, 19, 12, 3, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN, 0, 0, FALSE, 0, Text_Festival_Little_Boy_3, 0
	object_event 17, EVENT_OBJ_GFX_GIRL_3, 0, 18, 22, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, Festival_Girl_3, 0
	object_event 18, EVENT_OBJ_GFX_LITTLE_GIRL_1, 0, 19, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, Festival_Little_Girl, 0
	object_event 19, EVENT_OBJ_GFX_CAMPER, 0, 18, 9, 3, MOVEMENT_TYPE_WANDER_AROUND, 0, 0, FALSE, 0, Festival_Camper, 0
	object_event 20, EVENT_OBJ_GFX_MAN_5, 0, 23, 12, 3, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_LEFT_UP, 0, 0, FALSE, 0, Festival_Man_5, 0
	object_event 21, EVENT_OBJ_GFX_CONTEST_JUDGE, 0, 16, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, Festival_Contest_Judge, 0
	object_event 22, EVENT_OBJ_GFX_PROF_BIRCH, 0, 16, 11, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, Festival_Prof_Birch_2, 0

LittlerootTown_MapWarps::
	warp_def 15, 3, 3, 1, MAP_MAUVILLE_CITY_GYM
	warp_def 14, 3, 3, 0, MAP_MAUVILLE_CITY_GYM

LittlerootTown_MapBGEvents::
	bg_event 13, 9, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_Sign_StartHacking

LittlerootTown_MapEvents::
	map_events LittlerootTown_EventObjects, LittlerootTown_MapWarps, 0x0, LittlerootTown_MapBGEvents
