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

FallFestival_Stand_B:: @ 81538CB
    lock
    faceplayer
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
    message LavaridgeTown_Mart_Text_1A0BE4
    waitmessage
    festivalstand 2
    msgbox LavaridgeTown_Mart_Text_1A0C02, 4
    release
    end

FallFestival_Stand_D:: @ 81538CB
    lock
    faceplayer
    message LavaridgeTown_Mart_Text_1A0BE4
    waitmessage
    festivalstand 3
    msgbox LavaridgeTown_Mart_Text_1A0C02, 4
    release
    end

FallFestival_Stand_E:: @ 81538CB
    lock
    faceplayer
    message LavaridgeTown_Mart_Text_1A0BE4
    waitmessage
    festivalstand 4
    msgbox LavaridgeTown_Mart_Text_1A0C02, 4
    release
    end

FallFestival_Stand_F:: @ 81538CB
    lock
    faceplayer
    message LavaridgeTown_Mart_Text_1A0BE4
    waitmessage
    festivalstand 5
    msgbox LavaridgeTown_Mart_Text_1A0C02, 4
    release
    end

    .align 2
FallFestival_Stand_A_Mons::
FallFestival_Stand_B_Mons::
FallFestival_Stand_C_Mons::
FallFestival_Stand_D_Mons::
FallFestival_Stand_E_Mons::
FallFestival_Stand_F_Mons::
    .2byte FESTIVAL_MON_POLITOED_LOW
    .2byte FESTIVAL_MON_POLITOED_HIGH
    release
    end

Festival_Stand_Bought_Mon_Text:: @ 81A0BE4
    .string "Uhhhhh gtfo... you\p"
    .string "already spent tickets here.$"
