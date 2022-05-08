/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_cimetery
*/

#include "includes.h"
#include "cimetery.h"

static body_t *init_cimetery_elem_4(body_t *elem)
{
    elem[24] = create_body("other/blank.png", (sfIntRect){0, 0, 5,
    110}, (sfVector2f){555, -700});
    elem[25] = create_body("other/blank.png", (sfIntRect){0, 0, 5,
    160}, (sfVector2f){1470, -430});
    elem[26] = create_body("other/blank.png", (sfIntRect){0, 0, 5,
    160}, (sfVector2f){460, -430});
    elem[27] = create_body("other/blank.png", (sfIntRect){0, 0, 120,
    50}, (sfVector2f){-65, -565});
    elem[28] = create_body("other/blank.png", (sfIntRect){0, 0, 120,
    50}, (sfVector2f){1820, -565});
    elem[29] = create_body("other/blank.png", (sfIntRect){0, 0, 100,
    60}, (sfVector2f){2050, -610});
    elem[30] = create_body("other/blank.png", (sfIntRect){0, 0, 120,
    50}, (sfVector2f){-75, 420});
    elem[31] = create_body("other/blank.png", (sfIntRect){0, 0, 120,
    50}, (sfVector2f){1855, 420});

    elem[32] = create_body("other/blank.png", (sfIntRect){0, 0, 96,
    159}, (sfVector2f){-85, 275});
    elem[33] = create_body("other/blank.png", (sfIntRect){0, 0, 96,
    159}, (sfVector2f){1840, 275});
    elem[34] = create_body("other/blank.png", (sfIntRect){0, 0, 96,
    159}, (sfVector2f){-75, -715});
    elem[35] = create_body("other/blank.png", (sfIntRect){0, 0, 96,
    159}, (sfVector2f){1810, -715});

    elem[36] = create_body("other/blank.png", (sfIntRect){0, 0, 96,
    95}, (sfVector2f){-85, 275});
    elem[37] = create_body("other/blank.png", (sfIntRect){0, 0, 96,
    95}, (sfVector2f){1840, 275});
    elem[38] = create_body("other/blank.png", (sfIntRect){0, 0, 96,
    95}, (sfVector2f){-75, -715});
    elem[39] = create_body("other/blank.png", (sfIntRect){0, 0, 96,
    95}, (sfVector2f){1810, -715});
    return (elem);
}

static body_t *init_cimetery_elem_3(body_t *elem)
{
    elem[16] = create_body("other/blank.png", (sfIntRect){0, 0, 5,
    110}, (sfVector2f){500, 350});
    elem[17] = create_body("other/blank.png", (sfIntRect){0, 0, 5,
    110}, (sfVector2f){1380, 560});
    elem[18] = create_body("other/blank.png", (sfIntRect){0, 0, 5,
    110}, (sfVector2f){500, 550});
    elem[19] = create_body("other/blank.png", (sfIntRect){0, 0, 5,
    160}, (sfVector2f){1480, 170});
    elem[20] = create_body("other/blank.png", (sfIntRect){0, 0, 5,
    160}, (sfVector2f){410, 160});
    elem[21] = create_body("other/blank.png", (sfIntRect){0, 0, 5,
    60}, (sfVector2f){1370, -510});
    elem[22] = create_body("other/blank.png", (sfIntRect){0, 0, 5,
    60}, (sfVector2f){555, -500});
    elem[23] = create_body("other/blank.png", (sfIntRect){0, 0, 5,
    110}, (sfVector2f){1370, -710});
    elem = init_cimetery_elem_4(elem);
    return (elem);
}

static body_t *init_cimetery_elem_2(body_t *elem)
{
    elem[7] = create_body("other/blank.png", (sfIntRect){0, 0, 870,
    5}, (sfVector2f){-400, -265});
    elem[8] = create_body("other/blank.png", (sfIntRect){0, 0, 870,
    5}, (sfVector2f){1480, -265});
    elem[9] = create_body("other/blank.png", (sfIntRect){0, 0, 870,
    5}, (sfVector2f){-460, 160});
    elem[10] = create_body("other/blank.png", (sfIntRect){0, 0, 870,
    5}, (sfVector2f){1480, 170});
    elem[11] = create_body("other/blank.png", (sfIntRect){0, 0, 100,
    5}, (sfVector2f){460, -450});
    elem[12] = create_body("other/blank.png", (sfIntRect){0, 0, 100,
    5}, (sfVector2f){1370, -460});
    elem[13] = create_body("other/blank.png", (sfIntRect){0, 0, 100,
    5}, (sfVector2f){410, 350});
    elem[14] = create_body("other/blank.png", (sfIntRect){0, 0, 100,
    5}, (sfVector2f){1380, 360});
    elem[15] = create_body("other/blank.png", (sfIntRect){0, 0, 5,
    110}, (sfVector2f){1380, 360});
    elem = init_cimetery_elem_3(elem);
    return (elem);
}

body_t *init_cimetery_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("map/cimetery.png", (sfIntRect){535, 830, 1920,
    1080}, (sfVector2f){0, 0});
    elem[1] = create_body("map/cimetery3d.png", (sfIntRect){535, 830, 1920,
    1080}, (sfVector2f){0, 0});
    elem[2] = create_body("other/blank.png", (sfIntRect){0, 0, 3000,
    100}, (sfVector2f){-400, 680});
    elem[3] = create_body("other/blank.png", (sfIntRect){0, 0, 10,
    1500}, (sfVector2f){-390, -700});
    elem[4] = create_body("other/blank.png", (sfIntRect){0, 0, 10,
    1500}, (sfVector2f){2300, -700});
    elem[5] = create_body("other/blank.png", (sfIntRect){0, 0, 3000,
    100}, (sfVector2f){-400, 680});
    elem[6] = create_body("other/blank.png", (sfIntRect){0, 0, 3000,
    100}, (sfVector2f){-400, -850});
    elem = init_cimetery_elem_2(elem);
    return (elem);
}
