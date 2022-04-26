/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** create_block
*/

#include "includes.h"
#include "game.h"

static body_t *create_block_5(body_t *elem)
{
    elem[38] = create_body("other/block.png", (sfIntRect){0, 0, 50, 600},
    (sfVector2f){6110, -1575});
    elem[39] = create_body("other/block.png", (sfIntRect){0, 0, 50, 450},
    (sfVector2f){6110, -755});
    elem[40] = create_body("other/block.png", (sfIntRect){0, 0, 900, 320},
    (sfVector2f){6110, -1575});
    elem[41] = create_body("other/block.png", (sfIntRect){0, 0, 900, 420},
    (sfVector2f){6315, -780});
    elem[42] = create_body("other/block.png", (sfIntRect){0, 0, 820, 50},
    (sfVector2f){5315, -780});
    elem[43] = create_body("other/block.png", (sfIntRect){0, 0, 350, 50},
    (sfVector2f){5755, -1020});
    elem[44] = create_body("other/block.png", (sfIntRect){0, 0, 50, 900},
    (sfVector2f){5755, -1850});
    elem[45] = create_body("other/block.png", (sfIntRect){0, 0, 50, 1200},
    (sfVector2f){5500, -1850});
    elem[46] = create_body("other/block.png", (sfIntRect){0, 0, 50, 1200},
    (sfVector2f){4940, -2750});
    elem = create_block_6(elem);
    return (elem);
}

static body_t *create_block_4(body_t *elem)
{
    elem[29] = create_body("other/block.png", (sfIntRect){0, 0, 50, 800},
    (sfVector2f){4920, -315});
    elem[30] = create_body("other/block.png", (sfIntRect){0, 0, 275, 220},
    (sfVector2f){4920, -315});
    elem[31] = create_body("other/block.png", (sfIntRect){0, 0, 50, 2000},
    (sfVector2f){8210, -315});
    elem[32] = create_body("other/block.png", (sfIntRect){0, 0, 775, 50},
    (sfVector2f){7025, -315});
    elem[33] = create_body("other/block.png", (sfIntRect){0, 0, 300, 50},
    (sfVector2f){7950, -315});
    elem[34] = create_body("other/block.png", (sfIntRect){0, 0, 50, 1900},
    (sfVector2f){7950, -2215});
    elem[35] = create_body("other/block.png", (sfIntRect){0, 0, 50, 1900},
    (sfVector2f){7750, -2215});
    elem[36] = create_body("other/block.png", (sfIntRect){0, 0, 300, 50},
    (sfVector2f){7750, -2150});
    elem[37] = create_body("other/block.png", (sfIntRect){0, 0, 50, 1900},
    (sfVector2f){7010, -2215});
    elem = create_block_5(elem);
    return (elem);
}

static body_t *create_block_3(body_t *elem)
{
    elem[20] = create_body("other/block.png", (sfIntRect){0, 0, 280, 50},
    (sfVector2f){4100, 390});
    elem[21] = create_body("other/block.png", (sfIntRect){0, 0, 600, 50},
    (sfVector2f){4380, 470});
    elem[22] = create_body("other/block.png", (sfIntRect){0, 0, 500, 50},
    (sfVector2f){4480, 480});
    elem[23] = create_body("other/block.png", (sfIntRect){0, 0, 550, 50},
    (sfVector2f){4400, 680});
    elem[24] = create_body("other/block.png", (sfIntRect){0, 0, 900, 50},
    (sfVector2f){3650, 955});
    elem[25] = create_body("other/block.png", (sfIntRect){0, 0, 50, 500},
    (sfVector2f){4365, 690});
    elem[26] = create_body("other/block.png", (sfIntRect){0, 0, 50, 700},
    (sfVector2f){4950, 695});
    elem[27] = create_body("other/block.png", (sfIntRect){0, 0, 3500, 50},
    (sfVector2f){4950, 1310});
    elem[28] = create_body("other/block.png", (sfIntRect){0, 0, 1200, 50},
    (sfVector2f){4950, -315});
    elem = create_block_4(elem);
    return (elem);
}

static body_t *create_block_2(body_t *elem)
{
    elem[11] = create_body("other/block.png", (sfIntRect){0, 0, 310, 150},
    (sfVector2f){1920, 1290});
    elem[12] = create_body("other/block.png", (sfIntRect){0, 0, 1465, 1000},
    (sfVector2f){2235, 685});
    elem[13] = create_body("other/block.png", (sfIntRect){0, 0, 50, 10},
    (sfVector2f){2570, 270});
    elem[14] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){2630, 350});
    elem[15] = create_body("other/block.png", (sfIntRect){0, 0, 50, 485},
    (sfVector2f){3450, 10});
    elem[16] = create_body("other/block.png", (sfIntRect){0, 0, 800, 350},
    (sfVector2f){3450, 10});
    elem[17] = create_body("other/block.png", (sfIntRect){0, 0, 50, 485},
    (sfVector2f){4050, 10});
    elem[18] = create_body("other/block.png", (sfIntRect){0, 0, 275, 30},
    (sfVector2f){3450, 450});
    elem[19] = create_body("other/block.png", (sfIntRect){0, 0, 280, 30},
    (sfVector2f){3835, 450});
    elem = create_block_3(elem);
    return (elem);
}

body_t *create_block(body_t *elem)
{
    elem[2] = create_body("other/block.png", (sfIntRect){0, 0, 1025, 50},
    (sfVector2f){600, 220});
    elem[3] = create_body("other/block.png", (sfIntRect){0, 0, 1200, 50},
    (sfVector2f){600, 940});
    elem[4] = create_body("other/block.png", (sfIntRect){0, 0, 50, 800},
    (sfVector2f){550, 200});
    elem[5] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){1160, 520});
    elem[6] = create_body("other/block.png", (sfIntRect){0, 0, 370, 350},
    (sfVector2f){1620, 180});
    elem[7] = create_body("other/block.png", (sfIntRect){0, 0, 100, 365},
    (sfVector2f){1980, 170});
    elem[8] = create_body("other/block.png", (sfIntRect){0, 0, 80, 350},
    (sfVector2f){2060, 180});
    elem[9] = create_body("other/block.png", (sfIntRect){0, 0, 390, 350},
    (sfVector2f){2150, 150});
    elem[10] = create_body("other/block.png", (sfIntRect){0, 0, 400, 600},
    (sfVector2f){1520, 940});
    elem = create_block_2(elem);
    return (elem);
}
