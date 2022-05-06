/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** create_block_3
*/

#include "includes.h"
#include "game.h"

static body_t *create_block_15(body_t *elem)
{
    elem[125] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 10},
    (sfVector2f){5580, -110});
    elem[126] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 10},
    (sfVector2f){5670, 125});
    elem[127] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 10},
    (sfVector2f){5760, 110});
    elem[128] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 10},
    (sfVector2f){5850, 140});
    elem[129] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 10},
    (sfVector2f){5930, 110});
    elem[130] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 80},
    (sfVector2f){2490, 40});
    elem[131] = create_body("other/blue_block.png", (sfIntRect){0, 0, 990, 20},
    (sfVector2f){2490, 10});
    elem[132] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 10},
    (sfVector2f){2070, 110});
    elem[133] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 10},
    (sfVector2f){2070, 110});
    return (elem);
}

static body_t *create_block_14(body_t *elem)
{
    elem[116] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){2870, 350});
    elem[117] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){2990, 350});
    elem[118] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){3110, 350});
    elem[119] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){3220, 350});
    elem[120] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){3340, 350});
    elem[121] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 10},
    (sfVector2f){5480, -180});
    elem[122] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 10},
    (sfVector2f){5680, -180});
    elem[123] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 10},
    (sfVector2f){5870, -175});
    elem[124] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 10},
    (sfVector2f){5780, -110});
    elem = create_block_15(elem);
    return (elem);
}

static body_t *create_block_13(body_t *elem)
{
    elem[107] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){860, 900});
    elem[108] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){980, 900});
    elem[109] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){1080, 900});
    elem[110] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){1200, 900});
    elem[111] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){1320, 895});
    elem[112] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){1450, 890});
    elem[113] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){1560, 890});
    elem[114] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){1690, 890});
    elem[115] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){2760, 350});
    elem = create_block_14(elem);
    return (elem);
}

static body_t *create_block_12(body_t *elem)
{
    elem[100] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){1280, 520});
    elem[101] = create_body("other/block.png", (sfIntRect){0, 0, 50, 10},
    (sfVector2f){1400, 520});
    elem[102] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){1520, 520});
    elem[103] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){840, 440});
    elem[104] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){960, 440});
    elem[105] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){620, 900});
    elem[106] = create_body("other/block.png", (sfIntRect){0, 0, 60, 10},
    (sfVector2f){740, 900});
    elem = create_block_13(elem);
    return (elem);
}

body_t *create_block_11(body_t *elem)
{
    elem[92] = create_body("other/block.png", (sfIntRect){0, 0, 25, 2},
    (sfVector2f){7252, 805});
    elem[93] = create_body("other/block.png", (sfIntRect){0, 0, 25, 2},
    (sfVector2f){7230, 580});
    elem[94] = create_body("other/block.png", (sfIntRect){0, 0, 25, 2},
    (sfVector2f){7180, 430});
    elem[95] = create_body("other/block.png", (sfIntRect){0, 0, 50, 20},
    (sfVector2f){3820, 830});
    elem[96] = create_body("other/block.png", (sfIntRect){0, 0, 50, 20},
    (sfVector2f){3910, 710});
    elem[97] = create_body("other/block.png", (sfIntRect){0, 0, 50, 20},
    (sfVector2f){4160, 700});
    elem[98] = create_body("other/block.png", (sfIntRect){0, 0, 50, 20},
    (sfVector2f){4113, 830});
    elem[99] = create_body("other/block.png", (sfIntRect){0, 0, 50, 20},
    (sfVector2f){4265, 780});
    elem = create_block_12(elem);
    return (elem);
}
