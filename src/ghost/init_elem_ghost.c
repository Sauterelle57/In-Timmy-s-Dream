/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_ghost
*/

#include "includes.h"
#include "ghost.h"

static body_t *init_ghost_elem_3(body_t *elem)
{
    elem[18] = create_body("other/block.png", (sfIntRect){0, 0, 45, 50},
    (sfVector2f){505, -525});
    elem[19] = create_body("other/block.png", (sfIntRect){0, 0, 75, 110},
    (sfVector2f){1390, -493});
    elem[20] = create_body("other/block.png", (sfIntRect){0, 0, 75, 110},
    (sfVector2f){1520, -493});
    elem[21] = create_body("other/block.png", (sfIntRect){0, 0, 75, 110},
    (sfVector2f){1700, -493});
    elem[22] = create_body("other/block.png", (sfIntRect){0, 0, 150, 40},
    (sfVector2f){1060, -200});
    elem[23] = create_body("other/block.png", (sfIntRect){0, 0, 150, 40},
    (sfVector2f){1130, 220});
    elem[24] = create_body("other/block.png", (sfIntRect){0, 0, 150, 40},
    (sfVector2f){740, -200});
    elem[25] = create_body("other/green_block.png", (sfIntRect){0, 0, 90, 60}, //table
    (sfVector2f){760, -110});
    return (elem);
}

static body_t *init_ghost_elem_2(body_t *elem)
{
    elem[9] = create_body("other/block.png", (sfIntRect){0, 0, 275, 260},
    (sfVector2f){1020, -450});
    elem[10] = create_body("other/block.png", (sfIntRect){0, 0, 275, 220},
    (sfVector2f){670, 30});
    elem[11] = create_body("other/block.png", (sfIntRect){0, 0, 275, 220},
    (sfVector2f){1020, 30});
    elem[12] = create_body("other/block.png", (sfIntRect){0, 0, 50, 500},
    (sfVector2f){140, -700});
    elem[13] = create_body("other/block.png", (sfIntRect){0, 0, 50, 500},
    (sfVector2f){1910, -700});
    elem[14] = create_body("other/block.png", (sfIntRect){0, 0, 800, 50},
    (sfVector2f){1250, -325});
    elem[15] = create_body("other/block.png", (sfIntRect){0, 0, 600, 50},
    (sfVector2f){100, -325});
    elem[16] = create_body("other/block.png", (sfIntRect){0, 0, 45, 50},
    (sfVector2f){240, -525});
    elem[17] = create_body("other/block.png", (sfIntRect){0, 0, 45, 50},
    (sfVector2f){360, -525});
    elem = init_ghost_elem_3(elem);
    return (elem);
}

body_t *init_ghost_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("map/maisonent.png", (sfIntRect){980, 1350, 3840,
    2160}, (sfVector2f){0, 0});
    elem[1] = create_body("map/maisonent.png", (sfIntRect){980, 1350, 3840,
    2160}, (sfVector2f){0, 0});
    elem[2] = create_body("other/block.png", (sfIntRect){0, 0, 200, 50},
    (sfVector2f){850, 605});
    elem[3] = create_body("other/block.png", (sfIntRect){0, 0, 250, 80},
    (sfVector2f){1020, 570});
    elem[4] = create_body("other/block.png", (sfIntRect){0, 0, 250, 80},
    (sfVector2f){653, 570});
    elem[5] = create_body("other/block.png", (sfIntRect){0, 0, 50, 1000},
    (sfVector2f){675, -300});
    elem[6] = create_body("other/block.png", (sfIntRect){0, 0, 50, 1000},
    (sfVector2f){1210, -300});
    elem[7] = create_body("other/block.png", (sfIntRect){0, 0, 2000, 50},
    (sfVector2f){10, -600});
    elem[8] = create_body("other/block.png", (sfIntRect){0, 0, 275, 260},
    (sfVector2f){670, -450});
    elem = init_ghost_elem_2(elem);
    return (elem);
}
