/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** create_block_2
*/

#include "includes.h"
#include "game.h"

static body_t *create_block_10(body_t *elem)
{
    elem[83] = create_body("other/block.png", (sfIntRect){0, 0, 220, 110},
    (sfVector2f){5930, 900});
    elem[84] = create_body("other/block.png", (sfIntRect){0, 0, 300, 360},
    (sfVector2f){5600, 660});
    elem[85] = create_body("other/block.png", (sfIntRect){0, 0, 450, 390},
    (sfVector2f){6350, 660});
    elem[86] = create_body("other/block.png", (sfIntRect){0, 0, 400, 390},
    (sfVector2f){6400, 255});
    elem[87] = create_body("other/block.png", (sfIntRect){0, 0, 20, 2},
    (sfVector2f){7033, 500});
    elem[88] = create_body("other/block.png", (sfIntRect){0, 0, 20, 2},
    (sfVector2f){7263, 498});
    elem[89] = create_body("other/block.png", (sfIntRect){0, 0, 25, 2},
    (sfVector2f){7035, 910});
    elem[90] = create_body("other/block.png", (sfIntRect){0, 0, 25, 2},
    (sfVector2f){7110, 999});
    elem[91] = create_body("other/block.png", (sfIntRect){0, 0, 25, 2},
    (sfVector2f){7265, 999});
    elem = create_block_11(elem);
    return (elem);
}

static body_t *create_block_9(body_t *elem)
{
    elem[74] = create_body("other/block.png", (sfIntRect){0, 0, 60, 20},
    (sfVector2f){6857, -977});
    elem[75] = create_body("other/block.png", (sfIntRect){0, 0, 220, 110},
    (sfVector2f){6840, 55});
    elem[76] = create_body("other/block.png", (sfIntRect){0, 0, 220, 110},
    (sfVector2f){7360, 45});
    elem[77] = create_body("other/block.png", (sfIntRect){0, 0, 220, 110},
    (sfVector2f){7850, 52});
    elem[78] = create_body("other/block.png", (sfIntRect){0, 0, 220, 110},
    (sfVector2f){7370, 500});
    elem[79] = create_body("other/block.png", (sfIntRect){0, 0, 220, 110},
    (sfVector2f){7400, 920});
    elem[80] = create_body("other/block.png", (sfIntRect){0, 0, 220, 110},
    (sfVector2f){5135, 360});
    elem[81] = create_body("other/block.png", (sfIntRect){0, 0, 220, 110},
    (sfVector2f){5660, 360});
    elem[82] = create_body("other/block.png", (sfIntRect){0, 0, 220, 110},
    (sfVector2f){5375, 910});
    elem = create_block_10(elem);
    return (elem);
}

static body_t *create_block_8(body_t *elem)
{
    elem[65] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5700, -1485});
    elem[66] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5700, -1360});
    elem[67] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5700, -1240});
    elem[68] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5700, -1130});
    elem[69] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5700, -1000});
    elem[70] = create_body("other/block.png", (sfIntRect){0, 0, 60, 20},
    (sfVector2f){6190, -990});
    elem[71] = create_body("other/block.png", (sfIntRect){0, 0, 60, 20},
    (sfVector2f){6340, -1030});
    elem[72] = create_body("other/block.png", (sfIntRect){0, 0, 60, 20},
    (sfVector2f){6600, -1057});
    elem[73] = create_body("other/block.png", (sfIntRect){0, 0, 60, 20},
    (sfVector2f){6730, -1007});
    elem = create_block_9(elem);
    return (elem);
}

static body_t *create_block_7(body_t *elem)
{
    elem[56] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5550, -1735});
    elem[57] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5550, -1610});
    elem[58] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5550, -1485});
    elem[59] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5550, -1360});
    elem[60] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5550, -1240});
    elem[61] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5550, -1130});
    elem[62] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5550, -1000});
    elem[63] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5700, -1735});
    elem[64] = create_body("other/block.png", (sfIntRect){0, 0, 40, 10},
    (sfVector2f){5700, -1610});
    elem = create_block_8(elem);
    return (elem);
}

body_t *create_block_6(body_t *elem)
{
    elem[47] = create_body("other/block.png", (sfIntRect){0, 0, 50, 1200},
    (sfVector2f){6320, -2750});
    elem[48] = create_body("other/block.png", (sfIntRect){0, 0, 1500, 50},
    (sfVector2f){4940, -2640});
    elem[49] = create_body("other/block.png", (sfIntRect){0, 0, 585, 50},
    (sfVector2f){4940, -1905});
    elem[50] = create_body("other/block.png", (sfIntRect){0, 0, 580, 50},
    (sfVector2f){5780, -1905});
    elem[51] = create_body("other/block.png", (sfIntRect){0, 0, 170, 90},
    (sfVector2f){5069, -2119});
    elem[52] = create_body("other/block.png", (sfIntRect){0, 0, 170, 90},
    (sfVector2f){5069, -2545});
    elem[53] = create_body("other/block.png", (sfIntRect){0, 0, 170, 90},
    (sfVector2f){6105, -2525});
    elem[54] = create_body("other/block.png", (sfIntRect){0, 0, 128, 30},
    (sfVector2f){6108, -2035});
    elem[55] = create_body("other/block.png", (sfIntRect){0, 0, 40, 60},
    (sfVector2f){5645, -2297});
    elem = create_block_7(elem);
    return (elem);
}
