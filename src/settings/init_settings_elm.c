/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_menu_elm
*/

#include "includes.h"
#include "main_menu.h"
#include "settings.h"
#include "interest.h"

button_t *init_settings_button(sfRenderWindow *window, int nb)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    button_t *buttons = malloc(sizeof(button_t) * nb);

    buttons[0] = create_button(9, (sfVector2f){size.x * 0.15, size.y * 0.50},
    create_button_text(50, (sfVector2f){size.x * 0.15 + 130, size.y *
    0.50 + 20}, "FPS : 60"), &manage_framerate);
    buttons[1] = create_button(9, (sfVector2f){size.x * 0.60, size.y *
    0.50}, create_button_text(40, (sfVector2f){size.x * 0.60 + 80, size.y *
    0.50 + 30}, "Difficulte : 1"), &manage_difficulty);
    buttons[2] = create_button(9, (sfVector2f){size.x * 0.40, size.y *
    0.80}, create_button_text(40, (sfVector2f){size.x * 0.40 + 150, size.y *
    0.80 + 30}, "Retour"), &quit_settings);
    buttons[3] = create_square_button(12, (sfVector2f){size.x * 0.10, size.y *
    0.34}, create_button_text(40, (sfVector2f){0, 0}, ""), &manage_volume);
    buttons[4] = create_square_button(15, (sfVector2f){size.x * 0.41, size.y *
    0.34}, create_button_text(40, (sfVector2f){0, 0}, ""), &manage_volume);
    buttons[5] = create_button(9, (sfVector2f){size.x * 0.60, size.y *
    0.30}, create_button_text(40, (sfVector2f){size.x * 0.60 + 30, size.y *
    0.30 + 30}, "COMMENT JOUER ?"), &go_htp);
    return (buttons);
}

interest_t *init_settings_interest(sfRenderWindow *window, int nb)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    interest_t *interest = malloc(sizeof(interest_t) * nb);

    return (interest);
}

body_t *init_settings_elem2(sfVector2u size, body_t *elem, int nb)
{
    elem[5] = create_body("parallax/cloud6.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    elem[6] = create_body("parallax/cloud7.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    elem[7] = create_body("parallax/cloud8.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    elem[8] = create_body("other/sound.png", (sfIntRect){800, 0, 160, 18},
    (sfVector2f){size.x * 0.15, size.y * 0.34});
    sfSprite_setScale(elem[8].sprite, (sfVector2f){3, 3});
    for (int i = 0; i < 8; i++) {
        sfTexture_setRepeated(elem[i].text, sfTrue);
        sfSprite_setTexture(elem[i].sprite, elem[i].text, sfTrue);
        sfSprite_setTextureRect(elem[i].sprite, elem[i].rect);
    }
    return (elem);
}

body_t *init_settings_elem(sfRenderWindow *window, int nb)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    body_t *elem = malloc(sizeof(body_t) * nb);

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
    return (init_settings_elem2(size, elem, nb));
}
