/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_menu_elm
*/

#include "includes.h"
#include "main_menu.h"
#include "settings.h"

static void fonction2(game_t *g, int i)
{
    my_printf("Button clicked !!\n");
}

button_t *init_settings_button(sfRenderWindow *window, int nb)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    button_t *buttons = malloc(sizeof(button_t) * nb);

    buttons[0] = create_button(9, (sfVector2f){size.x * 0.15, size.y * 0.50},
    create_button_text(50, (sfVector2f){size.x * 0.15 + 130, size.y *
    0.50 + 20}, "FPS: 60"), &manage_framerate);

    buttons[1] = create_button(9, (sfVector2f){size.x * 0.60, size.y *
    0.50}, create_button_text(50, (sfVector2f){size.x * 0.60 + 50, size.y *
    0.50 + 20}, "Difficulty: 1"), &manage_difficulty);

    buttons[2] = create_button(9, (sfVector2f){size.x * 0.60, size.y *
    0.70}, create_button_text(50, (sfVector2f){size.x * 0.60 + 100, size.y *
    0.70 + 20}, "Main Menu"), &go_menu);

    buttons[3] = create_square_button(12, (sfVector2f){size.x * 0.05, size.y *
    0.8}, create_button_text(50, (sfVector2f){size.x * 0.60 + 180, size.y *
    0.70 + 20}, " "), &manage_volume);

    //buttons[5] = create_square_button(16, (sfVector2f){size.x * 0.60, size.y *
    //0.9}, create_button_text(50, (sfVector2f){0, 0}, " "), &quit_game);

    buttons[4] = create_square_button(15, (sfVector2f){size.x * 0.45, size.y *
    0.8}, create_button_text(50, (sfVector2f){100, 100}, ""), &manage_volume);

    return (buttons);
}

interest_t *init_settings_interest(sfRenderWindow *window, int nb)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    interest_t *interest = malloc(sizeof(interest_t) * nb);

    //interest[0] = create_interest("other/test.png", (sfIntRect)
    //{0, 0, 50, 50}, (sfVector2f){size.x * 0.21, size.y * 0.42}, action);
    //interest[1] = create_interest("other/test.png", (sfIntRect)
    //{0, 0, 50, 50}, (sfVector2f){size.x * 0.16, size.y * 0.70}, action);
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
    (sfVector2f){size.x * 0.10, size.y * 0.80});
    sfIntRect amogus = sfSprite_getTextureRect(elem[8].sprite);
    printf("((left:%d top:%d  height:%d  width:%d))\n", amogus.left, amogus.top, amogus.width, amogus.height);
    sfSprite_setScale(elem[8].sprite, (sfVector2f){4, 4});
    for (int i = 0; i < 8; i++) {
        sfTexture_setRepeated(elem[i].text, sfTrue);
        sfSprite_setTexture(elem[i].sprite, elem[i].text, sfTrue);
        sfSprite_setTextureRect(elem[i].sprite, elem[i].rect);
    }
    return(elem);

}

body_t *init_settings_elem(sfRenderWindow *window, int nb)
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
    return (init_settings_elem2(size, elem, nb));
}
