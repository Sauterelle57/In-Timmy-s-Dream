/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fonctions create
*/

#include "includes.h"

body_t create_body(char *text, sfIntRect rect, sfVector2f pos)
{
    sfTexture *texture = sfTexture_createFromFile(text, NULL);
    sfSprite *sprite = sfSprite_create();
    body_t body = {texture, sprite, rect, pos};

    Set_Texture(sprite, text);
    Set_Texture_Rect(sprite, rect);
    Set_Pos(sprite, pos.x, pos.y);
    return (body);
}

interest_t create_interest(char *text, sfIntRect rect, sfVector2f pos,
void (*action)(game_t *))
{
    body_t body = create_body(text, rect, pos);
    interest_t interest = {body, action};

    return (interest);
}

player_t create_player(void)
{
    body_t body = create_body(NPC[16], (sfIntRect)
    {0, 0, 32, 48}, (sfVector2f){940, 540});
    body_t pv_bar = create_body("other/pv_bar.png", (sfIntRect)
    {0, 0, 126, 24}, (sfVector2f){50, 50});
    body_t pa_bar = create_body("other/pa_bar.png", (sfIntRect)
    {0, 0, 126, 24}, (sfVector2f){50, 100});
    object_t *inventory = malloc(sizeof(object_t) * 2);

    for (int i = 0; i < 2; i++)
        inventory[i] = create_object(OBJ[i], 0, 0, 0);
    player_t player = {body, inventory, pv_bar, pa_bar, 100, 50};
    return (player);
}

game_t create_game(void)
{
    sfRenderWindow *window = create_window(1920, 1080);
    sfEvent event;
    timing_t t = create_timer();
    body_t cursor = create_body("cursor/pointer003.png", (sfIntRect)
    {0, 0, 100, 100}, (sfVector2f){sfMouse_getPosition((sfWindow *)window).x,
    sfMouse_getPosition((sfWindow *)window).y});
    player_t player = create_player();
    game_t game = {window, event, t, cursor, player};

    return (game);
}
