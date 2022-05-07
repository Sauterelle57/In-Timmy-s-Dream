/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_htp
*/

#include "includes.h"
#include "how_to_play.h"

body_t *init_htp_elem_3(body_t *elem)
{
    elem[12] = create_body("other/green_block.png", (sfIntRect){0, 0, 10, 430},
    (sfVector2f){550, 200});
    elem[13] = create_body("other/blank.png", (sfIntRect){0, 0, 200, 100},
    (sfVector2f){1300, 300});
    elem[14] = create_body("other/blank.png", (sfIntRect){0, 0, 1917, 1076},
    (sfVector2f){650, 400});
    Set_Scale(elem[14].sprite, 0.4, 0.4);
    return (elem);
}

body_t *init_htp_elem_2(body_t *elem)
{
    elem[7] = create_body("parallax/cloud8.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    for (int i = 0; i < 8; i++) {
        sfTexture_setRepeated(elem[i].text, sfTrue);
        sfSprite_setTexture(elem[i].sprite, elem[i].text, sfTrue);
        sfSprite_setTextureRect(elem[i].sprite, elem[i].rect);
    }
    elem[8] = create_body("other/tuto_bg.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    elem[9] = create_body("other/block.png", (sfIntRect){0, 0, 430, 10},
    (sfVector2f){200, 200});
    elem[10] = create_body("other/blue_block.png", (sfIntRect){0, 0, 10, 430},
    (sfVector2f){200, 200});
    elem[11] = create_body("other/block.png", (sfIntRect){0, 0, 430, 10},
    (sfVector2f){200, 550});
    elem = init_htp_elem_3(elem);
    return (elem);
}

body_t *init_htp_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("parallax/cloud1.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    elem[1] = create_body("parallax/cloud2.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    elem[2] = create_body("parallax/cloud3.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    elem[3] = create_body("parallax/cloud4.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    elem[4] = create_body("parallax/cloud5.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    elem[5] = create_body("parallax/cloud6.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    elem[6] = create_body("parallax/cloud7.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    elem = init_htp_elem_2(elem);
    return (elem);
}
