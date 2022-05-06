/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_button_htp
*/

#include "includes.h"
#include "how_to_play.h"
#include "interest.h"

static void draw_inv(game_t *g, int i)
{
    g->scene[g->curent_scene].elem[14] = create_body("other/inv.png",
    (sfIntRect){0, 0, 1917, 1076}, (sfVector2f){650, 400});
    Set_Scale(g->scene[g->curent_scene].elem[14].sprite, 0.4, 0.4);
}

button_t *init_htp_button(sfRenderWindow *window, int nb_button)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    button_t *buttons = malloc(sizeof(button_t) * nb_button);

    buttons[0] = create_square_button(6, (sfVector2f){size.x * 0.95, size.y *
    0.03}, create_button_text(50, (sfVector2f){100, 100}, ""), &go_settings);
    buttons[1] = create_square_button(3, (sfVector2f){size.x * 0.50, size.y *
    0.70}, create_button_text(50, (sfVector2f){100, 100}, ""), draw_inv);
    return (buttons);
}
