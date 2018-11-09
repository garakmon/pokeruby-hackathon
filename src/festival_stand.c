/*
#include "global.h"
#include "shop.h"
#include "decompress.h"
#include "field_fadetransition.h"
#include "field_weather.h"
#include "item_menu.h"
#include "main.h"
#include "menu.h"
#include "menu_helpers.h"
#include "money.h"
#include "palette.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "strings.h"
#include "task.h"
#include "tv.h"
#include "scanline_effect.h"
#include "event_object_movement.h"
#include "field_player_avatar.h"
#include "fieldmap.h"
#include "item.h"
#include "decoration.h"
#include "constants/items.h"
#include "constants/songs.h"
#include "constants/species.h"
#include "overworld.h"
#include "decoration_inventory.h"
#include "field_camera.h"
//#include "ewram.h"
//#include "festival_stand.h"
#include "event_data.h"

//static struct Stand StandInfo;

//              Ambipom(+), Delibird, Octilery, Shuckle, Scizor, Slowking, 
//              Quagsire, Gourgeist, Honchcrow, Bellossom, Ampharos, Furrett, 
//              Electabuzz, Magmar, Scyther, Hitmonlee, Hitmonchan, Hitmontop

/// Politoed 

const struct FestivalMon StandA[] =
{
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 50
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 200
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 250
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 500
    },
    {
        .speciesId = SPECIES_POLITOED,
        .price = 1000
    },
};

static const u8 tempMonDescription[] = _(
    "A special BALL that\n"
    "is used only in the\n"
    "SAFARI ZONE.");

const struct FestivalMon StandB[] =
{
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
};

const struct FestivalMon StandC[] =
{
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
};

const struct FestivalMon StandD[] =
{
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
};

const struct FestivalMon StandE[] =
{
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
};

const struct FestivalMon StandF[] =
{
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
    {
        .speciesId = SPECIES_PORYGON2,
        .price = 100
    },
};

const struct FestivalMon * const sFestivalStandMons[] =
{
    StandA,
    StandB,
    StandC,
    StandD,
    StandE,
    StandF,
};
*/
/*
const struct MenuAction2 standBuySellQuitMenuActions[] =
{
    { MartText_Buy, Task_HandleStandMenuBuy },
    { MartText_Sell, Task_HandleStandMenuSell },
    { MartText_Quit2, Task_HandleStandMenuQuit },
};
*/

/*
bool8 ScrCmd_festivalstand(struct ScriptContext *ctx) {
    u16 standNum = VarGet(ScriptReadHalfword(ctx));

    Festival_CreateStandMenu(standNum);
    ScriptContext1_Stop();
    return TRUE;
}
*/

/*
void Festival_CreateStandMenu(u16 standNum) {
    //
    CreateStandMenu(standNum);
    SetStandMonsForSale(sFestivalStandMons[standNum]);
    ClearItemPurchases();
    //SetShopMenuCallback(EnableBothScriptContexts);
    //Stand_DisplayPriceInList(StandInfo.cursor, StandInfo.cursor, 0);
    StandInfo.callback = EnableBothScriptContexts;
}

u8 CreateStandMenu(u16 num) {
    //
    ScriptContext2_Enable();
    StandInfo.martType = num;
    StandInfo.cursor = 0;

    StandInfo.numChoices = 2;
    Menu_DrawStdWindowFrame(0, 0, 10, 7);
    Menu_PrintItemsReordered(1, 1, 3, standBuySellQuitMenuActions, gMartBuySellOptionList);
    
    InitMenu(0, 1, 1, StandInfo.numChoices + 1, 0, 9); // add 1 for cancel

    return CreateTask(Task_FestivalBuySellMenu, 8);
}

void SetStandMonsForSale(const struct FestivalMon *mons) {
    int i;
    StandInfo.monList  = mons;
    StandInfo.nMons = 0;
    for (i = 0; StandInfo.monList[i].speciesId; i++) AddMonForSale(StandInfo.monList[i]); //StandInfo.nMons++;
}

void AddMonForSale(const struct FestivalMon mon) {
    //
    StandInfo.nMons++;
}

void ClearSaleMons(){
    return;
}

void GivePlayerMon(u16 monId){
    return;
}

void TakeFestivalTickets(u16 amt){
    return;
}

void Task_FestivalBuySellMenu(u8 taskId)
{
    const u8 taskIdConst = taskId; // why is a local const needed to match?

    if (gMain.newAndRepeatedKeys & DPAD_UP)
    {
        if (StandInfo.cursor) // can move cursor up?
        {
            PlaySE(SE_SELECT);
            StandInfo.cursor = Menu_MoveCursor(-1);
        }
    }
    else if (gMain.newAndRepeatedKeys & DPAD_DOWN)
    {
        if (StandInfo.cursor != StandInfo.numChoices) // can move cursor down?
        {
            PlaySE(SE_SELECT);
            StandInfo.cursor = Menu_MoveCursor(1);
        }
    }
    else if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if (StandInfo.martType == MART_TYPE_0)
            standBuySellQuitMenuActions[gMartBuySellOptionList[StandInfo.cursor]].func(taskIdConst);
        else
            standBuySellQuitMenuActions[gMartBuyNoSellOptionList[StandInfo.cursor]].func(taskIdConst);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Task_HandleStandMenuQuit(taskIdConst);
    }
}

void Task_HandleStandMenuQuit(u8 taskId)
{
    Menu_DestroyCursor();
    Menu_EraseWindowRect(0, 0, 11, 8);
    sub_80BE3BC();
    ScriptContext2_Disable();
    DestroyTask(taskId);

    if (StandInfo.callback)
        StandInfo.callback(); // run the callback if it exists.
}



///////////////////////////////////////////////////////////////////////////////
void Stand_DisplayNormalPriceInList(u16 itemId, u8 var2, bool32 hasControlCode)
{
    u8 *stringPtr = gStringVar1;

    if (hasControlCode)
    {
        stringPtr[0] = EXT_CTRL_CODE_BEGIN;
        stringPtr[1] = 0x1;
        stringPtr[2] = 0x2;
        stringPtr += 3;
    }

    CopyItemName(itemId, stringPtr);

    sub_8072A18(&gStringVar1[0], 0x70, var2 << 3, 0x58, 0x1);
    stringPtr = gStringVar1;

    if (hasControlCode)
        stringPtr = &gStringVar1[3];

    GetMoneyAmountText(stringPtr, (ItemId_GetPrice(itemId) >> GetPriceReduction(1)), 0x4);
    Menu_PrintTextPixelCoords(&gStringVar1[0], 0xCA, var2 << 3, 1);
}

void Stand_DisplayPriceInList(int firstItemId, int lastItemId, bool32 hasControlCode)
{
    int i;

    for (i = firstItemId; i <= lastItemId && StandInfo.choicesAbove + i < StandInfo.nMons; i++)
        Stand_DisplayNormalPriceInList(StandInfo.monList[StandInfo.choicesAbove + i].speciesId, (i << 1) + 2, hasControlCode);

    if (i != 8 && StandInfo.choicesAbove + i == StandInfo.nMons)
    {
        Menu_BlankWindowRect(0xE, (i << 1) + 2, 0x1C, (i << 1) + 3);
        Menu_PrintText(gOtherText_CancelNoTerminator, 0xE, (i << 1) + 2);
    }
}

void Stand_PrintMonDescText(void)
{
    if (StandInfo.choicesAbove + StandInfo.cursor != StandInfo.nMons)
    {
        sub_8072AB0(tempMonDescription, //ItemId_GetDescription(StandInfo.monList[StandInfo.choicesAbove + StandInfo.cursor]),
                0x4, 0x68, 0x68, 0x30, 0);
    }
    else
    {
        sub_8072AB0(gOtherText_QuitShopping, 0x4, 0x68, 0x68, 0x30, 0);
    }
}

void Stand_DoCursorAction(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        if ((gMain.newAndRepeatedKeys & DPAD_ANY) == DPAD_UP) // only up can be pressed
        {
            if (StandInfo.cursor == 0)
            {
                if (StandInfo.choicesAbove == 0) // if there are no choices above, dont bother
                    return;

                PlaySE(SE_SELECT);
                StandInfo.choicesAbove--; // since cursor is at the top and there are choices above the top, scroll the menu up by updating choicesAbove.
                Shop_MoveItemListUp();
                Shop_DisplayPriceInList(0, 0, 0);
                Shop_PrintItemDescText();
                Shop_TryDrawVerticalScrollIndicators();
            }
            else // if the cursor is not 0, choicesAbove cannot be updated yet since the cursor is at the top of the menu, so update cursor.
            {
                PlaySE(SE_SELECT);
                StandInfo.cursor = Menu_MoveCursor(-1); // move cursor up
                Shop_PrintItemDescText();
            }
        }
        else if ((gMain.newAndRepeatedKeys & DPAD_ANY) == DPAD_DOWN) // only down can be pressed
        {
            if (StandInfo.cursor == 7) // are you at the bottom of the menu?
            {
                if (StandInfo.choicesAbove + StandInfo.cursor == StandInfo.itemCount) // are you at cancel?
                    return;

                PlaySE(SE_SELECT);
                StandInfo.choicesAbove++;
                Shop_MoveItemListDown();
                Shop_DisplayPriceInList(7, 7, 0);
                Shop_PrintItemDescText();
                Shop_TryDrawVerticalScrollIndicators();
            }
            else if (StandInfo.cursor != StandInfo.itemCount)
            {
                PlaySE(SE_SELECT);
                StandInfo.cursor = Menu_MoveCursor(1);
                Shop_PrintItemDescText();
            }
        }
        else if (gMain.newKeys & A_BUTTON)
        {
            PlaySE(SE_SELECT);

            if (StandInfo.choicesAbove + StandInfo.cursor != StandInfo.itemCount) // did you not hit CANCEL?
            {
                PauseVerticalScrollIndicator(TOP_ARROW);
                PauseVerticalScrollIndicator(BOTTOM_ARROW);
                SetVerticalScrollIndicators(BOTTOM_ARROW, INVISIBLE);
                Shop_DisplayPriceInList(StandInfo.cursor, StandInfo.cursor, 1);
                Menu_DestroyCursor();
                Menu_EraseWindowRect(0, 0xC, 0xD, 0x13);

                if (StandInfo.martType == MART_TYPE_0)
                {
                    gMartTotalCost = (ItemId_GetPrice(StandInfo.monList[StandInfo.choicesAbove + StandInfo.cursor].speciesId) >> GetPriceReduction(1)); // set 1x price
                    if (!IsEnoughMoney(gSaveBlock1.money, gMartTotalCost))
                    {
                        DisplayItemMessageOnField(taskId, gOtherText_NotEnoughMoney, Shop_DoPricePrintAndReturnToBuyMenu, 0xC3E1); // tail merge
                    }
                    else // _080B42BA
                    {
                        CopyItemName(StandInfo.monList[StandInfo.choicesAbove + StandInfo.cursor].speciedId, gStringVar1);
                        StringExpandPlaceholders(gStringVar4, gOtherText_HowManyYouWant);
                        DisplayItemMessageOnField(taskId, gStringVar4, Shop_UpdateCurItemCountToMax, 0xC3E1);                    
                    }
                }
                else // _080B428C
                {
                    gMartTotalCost = gDecorations[StandInfo.monList[StandInfo.choicesAbove + StandInfo.cursor].speciesId].price;

                    if (!IsEnoughMoney(gSaveBlock1.money, gMartTotalCost))
                    {
                        DisplayItemMessageOnField(taskId, gOtherText_NotEnoughMoney, Shop_DoPricePrintAndReturnToBuyMenu, 0xC3E1); // tail merge
                    }
                    else
                    {    
                        StringCopy(gStringVar1, gDecorations[StandInfo.monList[StandInfo.choicesAbove + StandInfo.cursor].speciesId].name);
                        ConvertIntToDecimalStringN(gStringVar2, gMartTotalCost, 0, 0x8);

                        if (StandInfo.martType == MART_TYPE_1)
                            StringExpandPlaceholders(gStringVar4, gOtherText_ThatWillBe2);
                        else
                            StringExpandPlaceholders(gStringVar4, gOtherText_ThatWillBe3);
                        DisplayItemMessageOnField(taskId, gStringVar4, Shop_DoYesNoPurchase, 0xC3E1);
                    }
                }
            }
            else
            {
                Task_ExitBuyMenu(taskId);
            }
        }
        else if (gMain.newKeys & B_BUTTON) // go back to buy/sell/exit menu
        {
            PlaySE(SE_SELECT);
            Task_ExitBuyMenu(taskId);
        }
    }
}

void Task_HandleStandMenuBuy(u8 taskId)
{
    gTasks[taskId].data[8] = (u32)BuyMenuDrawGraphics >> 16;
    gTasks[taskId].data[9] = (u32)BuyMenuDrawGraphics;
    gTasks[taskId].func = Shop_FadeAndRunBuySellCallback;
    FadeScreen(1, 0);
}

void Task_HandleStandMenuSell(u8 taskId)
{
    gTasks[taskId].data[8] = (u32)ItemMenu_LoadSellMenu >> 16;
    gTasks[taskId].data[9] = (u32)ItemMenu_LoadSellMenu;
    gTasks[taskId].func = Shop_FadeAndRunBuySellCallback;
    FadeScreen(1, 0);
}

void Task_HandleStandMenuQuit(u8 taskId)
{
    Menu_DestroyCursor();
    Menu_EraseWindowRect(0, 0, 11, 8);
    sub_80BE3BC();
    ScriptContext2_Disable();
    DestroyTask(taskId);

    if (StandInfo.callback)
        StandInfo.callback(); // run the callback if it exists.
}
*/
