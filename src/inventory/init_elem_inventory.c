/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_inventory
*/

#include "includes.h"
#include "inventory.h"

body_t *init_inventory_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("other/inv_menu.png", (sfIntRect){0, 0, 1920,
    1080}, (sfVector2f){0, 0});
    sfTexture_setRepeated(elem[0].text, sfTrue);
    sfSprite_setTexture(elem[0].sprite, elem[0].text, sfTrue);
    sfSprite_setTextureRect(elem[0].sprite, elem[0].rect);
    elem[1] = create_body("other/blank.png", (sfIntRect)
    {0, 0, 600, 200}, (sfVector2f){980, 770});
    elem[2] = create_body("other/inventory.png", (sfIntRect)
    {0, 0, 750, 500}, (sfVector2f){900, 200});
    return (elem);
}
