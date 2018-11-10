#ifndef GUARD_FESTIAL_STAND_H
#define GUARD_FESTIAL_STAND_H

struct FestivalMon {
    u16 speciesId;
    u16 price;
};

struct Stand {
    /* 0x0 */ void (* callback) (void);
    /* 0x4 */ const struct FestivalMon *monList;
    /* 0x8 */ u8 nMons; // how many unique items are there for sale?
    /* 0x9 */ u8 cursor; // this shows the on-screen true index of the cursor and not the current item selected.
    /* 0xA */ u8 numChoices; // how many options does the mart have? can be either 2 or 1 (BUY/SELL vs BUY)
    /* 0xB */ u8 choicesAbove; // when your cursor is far down, there are choices that have scrolled up past the top. this is the count of that.
    /* 0xC */ u8 martType; // 0-2. 0 is normal mart while 1-2 seem to be decor shops or non-stackable purchases in general.
    /* 0xD */ u8 curItemCount; // if you are selling an item, this is the count of the current item stack you have.
};

//struct MonData

//bool8 ScrCmd_festivalstand(struct ScriptContext *);
void Festival_CreateStandMenu(u16);
u8 CreateStandMenu(u16);
void AddMonForSale(const struct FestivalMon);
void SetStandMonsForSale(const struct FestivalMon *);
void Task_FestivalBuySellMenu(u8);
void Task_HandleStandMenuQuit(u8);

void Stand_DisplayPriceInList(int, int, bool32);
void Stand_DisplayNormalPriceInList(u16, u8, bool32);
void Stand_PrintMonDescText(void);
void Stand_DoCursorAction(u8);

void Task_HandleStandMenuBuy(u8 taskId);
void Task_HandleStandMenuSell(u8 taskId);
void Task_HandleStandMenuQuit(u8 taskId);

bool8 GiveFestivalMonToPlayer(u16 id);
void Shop_DoMonTransaction(u8 taskId);

    //ITEM_FOCUS_BAND,
    //ITEM_CHOICE_BAND,

const u16 StandA_Mons[] = 
{
    FESTIVAL_MON_CLOYSTER,
    FESTIVAL_MON_OCTILLERY,
    FESTIVAL_MON_POLITOED,
    FESTIVAL_MON_LUGIA,
    ITEM_NONE,
};

const u16 StandB_Mons[] = 
{
    FESTIVAL_MON_SHARPEDO,
    FESTIVAL_MON_WALREIN,
    FESTIVAL_MON_ARTICUNO,
    ITEM_NONE,
};

const u16 StandC_Mons[] = 
{
    FESTIVAL_MON_CAMERUPT,
    FESTIVAL_MON_CHARIZARD,
    FESTIVAL_MON_HO_OH,
    ITEM_NONE,
};

const u16 StandD_Mons[] = 
{
    FESTIVAL_MON_SWALOT,
    FESTIVAL_MON_MAWILE,
    FESTIVAL_MON_MEDICHAM,
    FESTIVAL_MON_SLAKING,
    ITEM_NONE,
};

const u16 StandE_Mons[] = 
{
    FESTIVAL_MON_KANGASKHAN,
    FESTIVAL_MON_TAUROS,
    FESTIVAL_MON_PIDGEOT,
    FESTIVAL_MON_WIGGLYTUFF,
    ITEM_NONE,
};

const u16 StandF_Mons[] = 
{
    FESTIVAL_MON_MEWTWO,
    ITEM_NONE,
};

const u16 * const gFestivalStandMons[] = 
{
    StandA_Mons,
    StandB_Mons,
    StandC_Mons,
    StandD_Mons,
    StandE_Mons,
    StandF_Mons,
};

#endif // GUARD_FESTIAL_STAND_H
