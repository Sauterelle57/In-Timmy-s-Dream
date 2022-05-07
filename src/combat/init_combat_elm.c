/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_game_elm
*/

#include "includes.h"
#include "combat.h"
#include "interest.h"

static void fonction(game_t *g, int i)
{
    my_printf("Button clicked !!\n");
}

void hit(game_t *g, int i)
{
    g->scene[g->curent_scene].interest[i].pv--;
    if (g->scene[g->curent_scene].interest[i].pv <= 0) {
        Set_Texture(g->scene[g->curent_scene].interest[i].body.sprite,
        CHOICE[g->scene[g->curent_scene].interest[i].random + 5]);
    }
}

interest_t *init_combat_interest(int nb_interest, body_t *elem)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);

    interest[0] = create_interest("deco/Door_4 (open).png", (sfIntRect)
    {0, 0, 70, 100}, (sfVector2f){215, 60}, &check_dialogue);
    interest[0].line = 20;
    Set_Scale(interest[0].body.sprite, 1.5, 1.5);
    interest[1] = create_interest("deco/Door_4.png", (sfIntRect)
    {0, 0, 70, 70}, (sfVector2f){1720, 960}, &nothing);
    Set_Scale(interest[1].body.sprite, 1.5, -1.5);
    sfSprite_setRotation(interest[1].body.sprite, -90.0);
    interest[2] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 50, 200}, (sfVector2f){1600, 860}, &go_back);
    spawn_enemy(nb_interest, elem, interest);
    return (interest);
}

int search_for_number(int *a, int search)
{
    int b = 0;

    for (int i = 0; i < nb_inter - 3; i++)
        if (a[i] == search)
            b = 1;
    return (b);
}

interest_t *spawn_enemy(int nb_interest, body_t *elem, interest_t *interest)
{
    int tab[nb_inter - 3];

    for (int i = 3; i < nb_interest; i++) {
        int k = (rand() % 167) + 2;
        int a = rand() % 5;
        int again = search_for_number(tab, k);
        tab[i - 3] = k;
        if (again == 0) {
            interest[i] = create_interest(CHOICE[a], (sfIntRect)
            {0, 0, 50, 70}, (sfVector2f){elem[k].pos.x + 8,
            elem[k].pos.y - 20}, &hit);
            interest[i].random = a;
        } else {
            interest[i] = create_interest(CHOICE[a], (sfIntRect)
            {0, 0, 50, 70}, (sfVector2f){-100, -10}, &hit);
            interest[i].random = a;
        }
    }
    return (interest);
}
