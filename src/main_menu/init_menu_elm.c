/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_menu_elm
*/

#include "includes.h"
#include "main_menu.h"
#include "settings.h"
void go_settings(game_t *g, int i);

void load_game(game_t *g, int i)
{
    if (i == 1)
        g->save_file = "save.txt";
    charge_scene(g, 0);
    g->curent_scene = 0;
}

button_t *init_menu_button(sfRenderWindow *window, int nb)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    button_t *buttons = malloc(sizeof(button_t) * nb);

    buttons[0] = create_button(9, (sfVector2f){size.x * 0.15, size.y * 0.50},
    create_button_text(50, (sfVector2f){size.x * 0.15 + 100, size.y *
    0.50 + 20}, "NEW GAME"), &load_game);
    buttons[1] = create_button(9, (sfVector2f){size.x * 0.15, size.y *
    0.70}, create_button_text(50, (sfVector2f){size.x * 0.15 + 100, size.y *
    0.70 + 20}, "CONTINUE"), &load_game);
    buttons[2] = create_button(9, (sfVector2f){size.x * 0.60, size.y *
    0.50}, create_button_text(50, (sfVector2f){size.x * 0.60 + 140, size.y *
    0.50 + 20}, "OPTION"), &go_settings);
    buttons[3] = create_button(9, (sfVector2f){size.x * 0.60, size.y *
    0.70}, create_button_text(50, (sfVector2f){size.x * 0.60 + 180, size.y *
    0.70 + 20}, "QUIT"), &quit_game);
    return (buttons);
}

static void action(game_t *g, int i)
{
    my_printf("Go for combat/dialogue/entry !!\n");
}

interest_t *init_menu_interest(sfRenderWindow *window, int nb)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb);

    return (interest);
}

body_t *init_menu_elem(sfRenderWindow *window, int nb)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    body_t *elem = malloc(sizeof(body_t) * nb);

    elem[0] = create_body("parallax/cloud1.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){size.x * 0, size.y * 0});
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
    elem[7] = create_body("parallax/cloud8.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    for (int i = 0; i < nb; i++) {
        sfTexture_setRepeated(elem[i].text, sfTrue);
        sfSprite_setTexture(elem[i].sprite, elem[i].text, sfTrue);
        sfSprite_setTextureRect(elem[i].sprite, elem[i].rect);
    }
    return (elem);
}
