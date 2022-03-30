/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** all fonction defines
*/

#ifndef DEFINES_H_
    #define DEFINES_H_

    #define pass(void) 0

    #define abs(nb) nb < 0 ? nb * -1 : nb

    #define Draw_Sprite(sprite) sfRenderWindow_drawSprite(g->window, sprite, 0)

    #define Draw_Text(text) sfRenderWindow_drawText(g->window, text, 0)

    #define Set_Pos(sprite, x, y) sfSprite_setPosition(sprite,\
    (sfVector2f){x, y});

    #define Set_Scale(sprite, x, y) sfSprite_setScale(sprite,\
    (sfVector2f){x, y});

    #define Set_Cursor(texture_file) sfSprite_setTexture(g->cursor.sprite,\
    sfTexture_createFromFile(texture_file, 0), sfFalse);

    #define Set_Texture(sprite, texture_file) sfSprite_setTexture(sprite,\
    sfTexture_createFromFile(texture_file, 0), sfFalse);

    #define Set_Texture_Rect(sprite, rect) sfSprite_setTextureRect(sprite,\
    rect)

    #define Get_Time(clock) sfClock_getElapsedTime(clock).microseconds\
    / 1000000.0;

    #define Get_Mouse_Pos(void) sfMouse_getPosition((sfWindow *)g->window)

    #define Key_Pressed(key) sfKeyboard_isKeyPressed(key)

    #define Get_Window_size(void) sfRenderWindow_getSize(g->window)

    #define Rect_Intersect(pos, size, other_rect) sfIntRect_intersects\
    (&(sfIntRect){pos.x, pos.y, size.x, size.y}, &other_rect, NULL)

    #define Rect_Contains(pos, size, a, b) sfIntRect_contains(&(sfIntRect)\
    {pos.x, pos.y, size.x, size.y}, a * (1920.0 / sfRenderWindow_getSize\
    (g->window).x), b * (1080.0 / sfRenderWindow_getSize(g->window).y))

#endif /* !DEFINES_H_ */
