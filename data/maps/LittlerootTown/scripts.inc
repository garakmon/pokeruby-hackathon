LittlerootTown_MapScripts:: @ 814D509
	map_script 3, LittlerootTown_MapScript1_14D514
	.byte 0

LittlerootTown_MapScript1_14D514:: @ 814D514
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	end

LittlerootTown_Sign_StartHacking:: @ 814C087
	msgbox Text_LittlerootTown_StartHacking, 3
	end

FallFestival_Stand_A:: @ 81538CB
    lock
    faceplayer
    goto_if_set FLAG_HIDE_FESTIVAL_STAND_A, FallFestival_Stand_A_Purchased
    message LavaridgeTown_Mart_Text_1A0BE4
    waitmessage
    festivalstand 0
    msgbox LavaridgeTown_Mart_Text_1A0C02, 4
    release
    end

FallFestival_Stand_B:: @ 81538CB
    lock
    faceplayer
    goto_if_set FLAG_HIDE_FESTIVAL_STAND_B, FallFestival_Stand_A_Purchased
    message LavaridgeTown_Mart_Text_1A0BE4
    waitmessage
    @checkflag FLAH_FESTIVAL_STAND_A
    festivalstand 1
    @pokemartdecoration FortreeCity_DecorationShop_Decorations1
    msgbox LavaridgeTown_Mart_Text_1A0C02, 4
    release
    end

FallFestival_Stand_C:: @ 81538CB
    lock
    faceplayer
    goto_if_set FLAG_HIDE_FESTIVAL_STAND_C, FallFestival_Stand_A_Purchased
    message LavaridgeTown_Mart_Text_1A0BE4
    waitmessage
    festivalstand 2
    msgbox LavaridgeTown_Mart_Text_1A0C02, 4
    release
    end

FallFestival_Stand_D:: @ 81538CB
    lock
    faceplayer
    goto_if_set FLAG_HIDE_FESTIVAL_STAND_D, FallFestival_Stand_A_Purchased
    message LavaridgeTown_Mart_Text_1A0BE4
    waitmessage
    festivalstand 3
    msgbox LavaridgeTown_Mart_Text_1A0C02, 4
    release
    end

FallFestival_Stand_E:: @ 81538CB
    lock
    faceplayer
    goto_if_set FLAG_HIDE_FESTIVAL_STAND_E, FallFestival_Stand_A_Purchased
    message LavaridgeTown_Mart_Text_1A0BE4
    waitmessage
    festivalstand 4
    msgbox LavaridgeTown_Mart_Text_1A0C02, 4
    release
    end

FallFestival_Stand_F:: @ 81538CB
    lock
    faceplayer
    goto_if_set FLAG_HIDE_FESTIVAL_STAND_F, FallFestival_Stand_A_Purchased
    message LavaridgeTown_Mart_Text_1A0BE4
    waitmessage
    festivalstand 5
    msgbox LavaridgeTown_Mart_Text_1A0C02, 4
    release
    end

FallFestival_Stand_A_Purchased:: @ 81538CB
@    lock
@    faceplayer
@    message LavaridgeTown_Mart_Text_1A0BE4
@    waitmessage
@    goto_if_set FLAG_HIDE_FESTIVAL_STAND_A, FallFestival_Stand_B
@    festivalstand 0
@    msgbox LavaridgeTown_Mart_Text_1A0C02, 4
    message Festival_Stand_Bought_Mon_Text
    waitmessage
    release
    end

FestivalGym:: @ 8153741
    trainerbattle 1, TRAINER_FLANNERY, 0, 0, 0, 0
    msgbox BeatFestivalMan, 4
    release
    end

Festival_Bug_Catcher:: @ 814C087
    msgbox Text_Festival_Bug_Catcher, 2
    end

Festival_Contest_Judge:: @ 814C087
    msgbox Text_Festival_Judge, 2
    end

Festival_Little_Girl:: @ 814C087
    msgbox Text_Festival_Little_Girl_1, 2
    end

Festival_Artist:: @ 814C087
    msgbox Text_Festival_Artist, 2
    end

Festival_Beauty:: @ 814C087
    msgbox Text_Festival_Beauty, 2
    end

Festival_Camper:: @ 814C087
    msgbox Text_Festival_Camper, 2
    end

Festival_Duskull:: @ 814C087
    msgbox Text_Festival_Duskull, 2
    end

Festival_Prof_Birch_2:: @ 814C087
    msgbox Text_Festival_Birch_2
    goto_if_unset FLAG_FESTIVAL_BIRCH, Festival_Prof_Birch_1
    end

Festival_Prof_Birch_1::
    msgbox Text_Festival_Birch_1, 2
    givemoney 3000, 0
    setflag FLAG_FESTIVAL_BIRCH
    end

Festival_Little_Boy_3:: @ 814C087
    msgbox Text_Festival_Little_Boy_3, 2
    end

Festival_Man_5:: @ 814C087
    msgbox Text_Festival_Man_5, 2
    end

Festival_Black_Belt:: @ 814C087
    msgbox Text_Festival_Black_Belt, 2
    end

Festival_Pumpkin_Lady:: @ 814C087
    msgbox Text_Festival_Pumpkin_Lady, 2
    end

Festival_Boy_2:: @ 814C087
    msgbox Text_Festival_Boy_2, 2
    end

Festival_Boy_1:: @ 814C087
    msgbox Text_Festival_Boy_1, 2
    end

Festival_Boy_3:: @ 814C087
    msgbox Text_Festival_Boy_3, 2
    end

Festival_Girl_3:: @ 814C087
    msgbox Text_Festival_Girl_3, 2
    end


