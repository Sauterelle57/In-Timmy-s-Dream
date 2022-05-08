/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** event_inventory
*/

#include "includes.h"
#include "inventory.h"
#include "player.h"

button_t re_check_button(game_t *g, sfVector2i pos,
sfVector2u size, button_t button)
{
    if (Mouse_Pressed(sfMouseLeft) && g->t.sec - g->cooldown > 0.4 &&
    sfIntRect_contains(&(sfIntRect){button.body.pos.x, button.body.pos.y,
    button.size.x, button.size.y}, pos.x * (1920.0 / size.x), pos.y *
    (1080.0 / size.y))) {
        sfSound_play(g->m.click);
        Set_Texture(button.body.sprite, BUTTON[button.png + 2]);
        button.on_click(g);
        g->scene[6].elem[1] = create_body("other/blank.png", (sfIntRect)
        {0, 0, 600, 200}, (sfVector2f){980, 770});
        g->cooldown = g->t.sec;
    }
    return (button);
}
