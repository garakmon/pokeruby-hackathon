#include "global.h"
#include "event_object_movement.h"
#include "field_camera.h"
#include "field_effect.h"
#include "field_effect_helpers.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "metatile_behavior.h"
#include "sound.h"
#include "sprite.h"
//#include "constants/field_effects.h"
//#include "constants/songs.h"
#include "mirror.h"

#define BLOCK_HEIGHT 16

extern void UpdateObjectReflectionSprite(struct Sprite *);
extern void LoadObjectReflectionPalette(struct EventObject *eventObject, struct Sprite *sprite);
//void UpdateObjectMirrorSprite(struct Sprite *);

const union AffineAnimCmd gabcde[] =
{
    //AFFINEANIMCMD_FRAME(0xFFFB, 0xFFFB, 0, 10),
    AFFINEANIMCMD_FRAME(0x5, 0x5, 0, 10),
    AFFINEANIMCMD_JUMP(0),
};

const union AffineAnimCmd *const affineTable69[] =
{
    gabcde,
};

int test(int x, int y)
{
    if (!y)
        y++;

    if (x == 0)
        x++;

    return (x + y);
}

void InitFunhouseMirrorReflection(struct EventObject *eventObject, struct Sprite *sprite, u8 type)
{
    struct Sprite *reflection;

    s16 xpos, ypos;

    switch(type)
    {
    default:
        xpos = sprite->pos1.x;
        ypos = sprite->pos1.y;
        break;

    case MIRROR_V_STRETCH:
        xpos = 0;
        ypos = BLOCK_HEIGHT;
        break;

    case MIRROR_H_STRETCH:
        xpos = 0;
        ypos = BLOCK_HEIGHT;
        break;

    case MIRROR_WAVY:
        xpos = sprite->pos1.x + 0;
        ypos = sprite->pos1.y + BLOCK_HEIGHT;
        break;

    case MIRROR_BIG_HEAD:
        xpos = sprite->pos1.x + 0;
        ypos = sprite->pos1.y + BLOCK_HEIGHT;
        break;

    case MIRROR_OPPOSITE:
        xpos = sprite->pos1.x + 0;
        ypos = sprite->pos1.y + BLOCK_HEIGHT;
        break;

    case MIRROR_UPSIDE_DOWN:
        xpos = sprite->pos1.x + 0;
        ypos = sprite->pos1.y + BLOCK_HEIGHT;
        break;

    case MIRROR_TRAINER:
        xpos = sprite->pos1.x + 0;
        ypos = sprite->pos1.y + BLOCK_HEIGHT;
        break;
    }
    //u8 CreateCopySpriteAt(struct Sprite *src, s16 x, s16 y, u8 subpriority)

    //reflection->data[3] = xpos;
    //reflection->data[4] = ypos;

    reflection = &gSprites[CreateCopySpriteAt(sprite, sprite->pos1.x + xpos, sprite->pos1.y + ypos, 0x98)];
    reflection->callback = UpdateObjectMirrorSprite;
    reflection->oam.priority = 3;
    reflection->oam.paletteNum = gReflectionEffectPaletteMap[reflection->oam.paletteNum];
    reflection->usingSheet = TRUE;
    // affine mode
    reflection->anims = gDummySpriteAnimTable;
    StartSpriteAnim(reflection, 0);
    //reflection->oam.affineMode = ST_OAM_AFFINE_NORMAL;
    //reflection->affineAnims = affineTable69; //gDummySpriteAffineAnimTable;
    reflection->affineAnimBeginning = TRUE;
    reflection->subspriteMode = SUBSPRITES_ON;
    reflection->data[0] = sprite->data[0];
    reflection->data[1] = eventObject->localId;
    reflection->data[7] = TRUE;
    LoadObjectReflectionPalette(eventObject, reflection);
}

void UpdateObjectMirrorSprite(struct Sprite *reflectionSprite)
{
    struct EventObject *eventObject;
    struct Sprite *mainSprite;

    eventObject = &gEventObjects[reflectionSprite->data[0]];
    mainSprite = &gSprites[eventObject->spriteId];
    if (!eventObject->active || !eventObject->hasReflection || eventObject->localId != reflectionSprite->data[1])
    {
        reflectionSprite->inUse = FALSE;
    }
    else
    {
        reflectionSprite->oam.paletteNum = gReflectionEffectPaletteMap[mainSprite->oam.paletteNum];
        reflectionSprite->oam.shape = mainSprite->oam.shape;
        reflectionSprite->oam.size = mainSprite->oam.size;
        //reflectionSprite->oam.matrixNum = mainSprite->oam.matrixNum;// | (((reflectionSprite->hFlip ^ mainSprite->hFlip) & 1) << 3);// | 0x10;
        //SetOamMatrix(u8 matrixNum, u16 a, u16 b, u16 c, u16 d)
        //SetOamMatrix(mainSprite->oam.matrixNum, 0x10, 0x08, 0x18, 0x08);//1, 0, 0, 1);
        reflectionSprite->oam.matrixNum = mainSprite->oam.matrixNum;
        reflectionSprite->oam.tileNum = mainSprite->oam.tileNum;
        reflectionSprite->subspriteMode = SUBSPRITES_ON;
        reflectionSprite->subspriteTables = mainSprite->subspriteTables;
        reflectionSprite->subspriteTableNum = mainSprite->subspriteTableNum;// + 10;
        reflectionSprite->invisible = FALSE;
        reflectionSprite->pos1.x = mainSprite->pos1.x;
        reflectionSprite->pos1.y = mainSprite->pos1.y + reflectionSprite->data[2] - BLOCK_HEIGHT;
        reflectionSprite->centerToCornerVecX = mainSprite->centerToCornerVecX;
        reflectionSprite->centerToCornerVecY = mainSprite->centerToCornerVecY;
        reflectionSprite->pos2.x = mainSprite->pos2.x;
        reflectionSprite->pos2.y = mainSprite->pos2.y;
        reflectionSprite->coordOffsetEnabled = mainSprite->coordOffsetEnabled;

        //if (mainSprite->oam.matrixNum & 0x8)
        //    reflectionSprite->oam.matrixNum = 0x10;

        //if (mainSprite->oam.matrixNum & 0x02)
        //    reflectionSprite->oam.matrixNum = 0;//0x10;

        // Check if the reflection is not still.
        /*if (reflectionSprite->data[7] == FALSE)
        {
            // Sets the reflection sprite's rot/scale matrix to the appropriate
            // matrix based on whether or not the main sprite is horizontally flipped.
            // If the sprite is facing to the east, then it is flipped, and its matrixNum is 8.
            reflectionSprite->oam.matrixNum = 0;
            if (mainSprite->oam.matrixNum & 0x10)//& 0x8)
                reflectionSprite->oam.matrixNum = 1;
        }*/
    }
}
