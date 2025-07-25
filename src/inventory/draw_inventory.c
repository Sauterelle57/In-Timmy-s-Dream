/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** draw_inventory
*/

#include "includes.h"
#include "inventory.h"
#include "player.h"

static void draw_text_inventory(game_t *g)
{
    char* temp = my_strcat("niveau: ", my_int_to_str(g->player.lvl));
    sfText *text = create_text(35, (sfVector2f){415, 260}, temp,
    "other/Blokletters-Balpen.ttf");
    sfRenderWindow_drawText(g->window, text, NULL);
}

object_t *init_object_inventory(object_t *inventory)
{
    for (int i = 0, x = 990, y = 275; i < NB_OBJ; i++) {
        inventory[i].body.pos.x = (x += 170);
        inventory[i].body.pos.y = y;
        Set_Pos(inventory[i].body.sprite, x - 170, y);
        Set_Scale(inventory[i].body.sprite, 4, 4);
        y += x >= 1600 ? 150 : 0;
        x = x >= 1600 ? 990 : x;
    }
}

static void draw_player_inventory(game_t *g)
{
    Draw_Sprite(g->player.body.sprite);
    sfText_setPosition(g->player.name, (sfVector2f){407, 710});
    Set_Pos(g->player.pv_bar.sprite, 365, 780);
    Draw_Sprite(g->player.pv_bar.sprite);
    Draw_Text(g->player.name);
    Draw_Sprite(g->scene[g->curent_scene].elem[1].sprite);
}

void draw_inventory(game_t *g)
{
    Draw_Sprite(g->scene[6].elem[0].sprite);
    for (int i = 0; i < g->scene[6].nb_interest; i++)
        Draw_Sprite(g->scene[6].interest[i].body.sprite);
    for (int i = 0; i < g->scene[6].nb_button; i++)
        Draw_Sprite(g->scene[6].button[i].body.sprite);
    init_object_inventory(g->player.inventory);
    Draw_Sprite(g->scene[6].elem[2].sprite);
    for (int i = 0; i < NB_OBJ; i++)
        if (g->player.inventory[i].own == 1)
            Draw_Sprite(g->player.inventory[i].body.sprite);
    draw_player_inventory(g);
    draw_text_inventory(g);
    sfRenderWindow_drawVertexArray(g->window, g->scene[6].array, 0);
}
