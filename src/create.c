/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fonctions create
*/

#include "includes.h"
#include "struct.h"
#include "define.h"
#include "category.h"

body_t create_body(char *text, sfIntRect rect, sfVector2f pos)
{
    sfTexture *texture = sfTexture_createFromFile(text, NULL);
    sfSprite *sprite = sfSprite_create();
    body_t body = {texture, sprite, rect, pos};

    Set_Texture(sprite, text);
    sfSprite_setTextureRect(sprite, rect);
    Set_Pos(sprite, pos.x, pos.y);
    return (body);
}

interest_t create_interest(char *text, sfIntRect rect, sfVector2f pos,
void (*action)(game_t *g))
{
    body_t body = create_body(text, rect, pos);
    interest_t interest = {body, &action};

    return (interest);
}

sfRenderWindow *create_window(int x, int y)
{
    sfVideoMode v_mode = {x, y, 32};
    sfRenderWindow *window = sfRenderWindow_create(v_mode, "our_RPG",
    sfClose | sfResize, NULL);

    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}

timer_t create_timer(void)
{
    sfClock *clock = sfClock_create();
    timer_t t = {clock, 0.0};

    return (t);
}

object_t create_object(char *text, int pv, int pa, int type)
{
    object_t obj = {text, 0, pv, pa, type};

    return (obj);
}

player_t create_player(void)
{
    body_t body = create_body("asset/space_man.png", (sfIntRect)
    {0, 0, 100, 100}, (sfVector2f){0, 0});
    object_t inventory[25];

    for (int i = 0; i < 25; i++)
        inventory[i] = create_object(OBJ[i], my_getnbr(OBJ[i + 1]),
        my_getnbr(OBJ[i + 2]), my_getnbr(OBJ[i + 3]));
    player_t player = {body, inventory, 50, 50, 0};
    return (player);
}

button_t create_button(char *texture, sfVector2f pos, sfText *text,
void (*fonction)(game_t *))
{
    button_t button = {create_body(texture, (sfIntRect){0, 0, 35, 10}, pos),
    (sfVector2f){400, 200}, text, fonction};

    sfSprite_setScale(button.body.sprite, (sfVector2f){10, 10});
    return (button);
}

button_t create_square_button(char *texture, sfVector2f pos, sfText *text,
void (*fonction)(game_t *))
{
    button_t button = {create_body(texture, (sfIntRect){0, 0, 16, 16}, pos),
    (sfVector2f){100, 100}, text, fonction};

    sfSprite_setScale(button.body.sprite, (sfVector2f){7, 7});
    return (button);
}

game_t create_game(void)
{
    sfRenderWindow *window = create_window(1920, 1080);
    sfEvent event;
    body_t cursor = create_body("asset/cursor.png", (sfIntRect)
    {0, 0, 100, 100}, (sfVector2f){sfMouse_getPosition((sfWindow *)window).x,
    sfMouse_getPosition((sfWindow *)window).y});
    player_t player = create_player();

    game_t game = {window, event, cursor, player};
    return (game);
}

scene_t create_scene(game_t *g)
{
    timer_t t = create_timer();
    button_t *buttons = init_button_of_my_scene(g->window);
    int nb_button = 2;
    body_t *elem = init_elem_of_my_scene(g->window);
    int nb_elem = 2;
    interest_t *interest = init_interest_of_my_scene(g->window);
    int nb_interest = 2;
    scene_t scene = {t, buttons, nb_button, elem, nb_elem, interest,
    nb_interest};

    scene.event = &event_in_my_scene;
    scene.draw = &draw_my_scene;
    scene.anim = &anim_my_scene;
    return (scene);
}

////////////////////////////////////////////////////////////
////////////////// SCENE FONCTIONS TYPE ////////////////////
//button
static void fonction(void)
{
    my_printf("Button clicked !!\n");
}

button_t *init_button_of_my_scene(sfRenderWindow *window)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    button_t *buttons = malloc(sizeof(button_t) * 2);

    buttons[0] = create_button("asset/button.png",
    (sfVector2f){size.x * 0.21, size.y * 0.42},
    create_text(50, (sfVector2f){100, 100}, "BUTTON"), &fonction);
    buttons[1] = create_square_button("asset/square_button.png",
    (sfVector2f){size.x * 0.84, size.y * 0.66},
    create_text(50, (sfVector2f){200, 200}, "BUTTON"), &fonction);
    return (buttons);
}

//interest
static void action(void)
{
    my_printf("Go for combat/dialogue !!\n");
}

button_t *init_interest_of_my_scene(sfRenderWindow *window)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    interest_t *interest = malloc(sizeof(interest_t) * 2);

    interest[0] = create_interest("asset/king.png", (sfIntRect)
    {0, 0, 50, 50}, (sfVector2f){size.x * 0.21, size.y * 0.42}, &action);
    interest[1] = create_interest("asset/bat.png", (sfIntRect)
    {0, 0, 50, 50}, (sfVector2f){size.x * 0.16, size.y * 0.70}, &action);
    return (interest);
}

//elements
button_t *init_elem_of_my_scene(sfRenderWindow *window)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    body_t *elem = malloc(sizeof(body_t) * 2);

    elem[0] = create_body("map/city.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){size.x * 0, size.y * 0});
    elem[0] = create_body("map/firecamp.png", (sfIntRect){0, 0, 50, 50},
    (sfVector2f){size.x * 500, size.x * 600});
    return (elem);
}

//event
void event_in_my_scene(game_t *g, scene_t *scene)
{
    if (Key_Pressed(sfKeyLeft))
        my_printf("Key Left\n");
    else if (Key_Pressed(sfKeyRight))
        my_printf("Key Right pressed\n");
}

//draw
void draw_my_scene(game_t *g, scene_t *scene)
{
    for (int i = 0; i < scene->nb_elem; i++)
        Draw_Sprite(scene->elem[i].sprite);
    for (int i = 0; i < scene->nb_interest; i++)
        Draw_Sprite(scene->interest[i].body.sprite);
    for (int i = 0; i < scene->nb_button; i++)
        Draw_Sprite(scene->button[i].body.sprite);
}

//anim
void anim_my_scene(game_t *g, scene_t *scene)
{
    static float tmp = 0.0;

    scene->t.sec = Get_Time(scene->t.clock);
    if (scene->t.sec - tmp > 0.05)
        for (int i = 0; i < scene->nb_elem; i++)
            scene->interest[i].body.rect.left +=
            scene->interest[i].body.rect.left > 650 ? -650 : 50;
    else if (scene->t.sec - tmp > 0.11)
        for (int i = 0; i < scene->nb_interest; i++)
            scene->interest[i].body.rect.left +=
            scene->interest[i].body.rect.left > 650 ? -650 : 50;
    for (int i = 0; i < scene->nb_button; i++) {
        if (/*Mouse pos in button*/)
            scene->interest[i].body.rect.left +=
            scene->interest[i].body.rect.left > 150 ? -150 : 50;
        else
            scene->interest[i].body.rect.left = 0;
    }
}
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
