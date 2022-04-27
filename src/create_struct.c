/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fonctions create
*/

#include "includes.h"
#include "player.h"

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
    sfText *name = create_text(50, (sfVector2f){200, 40}, NAME,
    "other/button.ttf");
    body_t body = create_body(NPC[16], (sfIntRect) {0, 0, 48, 48},
    (sfVector2f){940, 540});
    object_t *inventory = malloc(sizeof(object_t) * 11);
    body_t pv_bar = create_body("other/pv_bar.png", (sfIntRect)
    {0, 0, 126, 24}, (sfVector2f){200, 110});
    Set_Scale(pv_bar.sprite, 2, 2);
    body_t picture = create_body("other/pp_timmy.png", (sfIntRect)
    {0, 0, 2048, 2048}, (sfVector2f){30, 25});

    for (int i = 0; i < 11; i++)
        inventory[i] = create_object(OBJ[i], 0, 0, 0);
    Set_Scale(picture.sprite, 0.6, 0.6);
    player_t player = {name, body, inventory, pv_bar, picture, SPEED, PV, 50};
    return (player);
}

game_t create_game(void)
{
    sfRenderWindow *window = create_window(1920, 1080);
    sfEvent event;
    timing_t t = create_timer();
    music_t m = create_music();
    body_t cursor = create_body("cursor/pointer003.png", (sfIntRect)
    {0, 0, 100, 100}, (sfVector2f){sfMouse_getPosition((sfWindow *)window).x,
    sfMouse_getPosition((sfWindow *)window).y});
    player_t player = create_player();
    game_t game = {window, event, t, m, cursor, player, 0, 0.0};
    return (game);
}
