/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_interest_htp
*/

#include "includes.h"
#include "how_to_play.h"
#include "interest.h"

void nothing(game_t *g, int i)
{
    return;
}

interest_t *init_htp_interest(sfRenderWindow *window, int nb_interest)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);

    interest[0] = create_interest(NPC[2], (sfIntRect) //interest point nothing
    {0, 0, 48, 70}, (sfVector2f){1400, 400}, &nothing);
    Set_Scale(interest[0].body.sprite, 3, 3);
    interest[1] = create_interest(NPC[16], (sfIntRect) //player movement
    {0, 0, 48, 48}, (sfVector2f){350, 350}, &nothing);
    Set_Scale(interest[1].body.sprite, 3, 3);
    interest[2] = create_interest(NPC[16], (sfIntRect) //player interest
    {0, 96, 48, 48}, (sfVector2f){1280, 500}, &nothing);
    Set_Scale(interest[2].body.sprite, 3, 3);
    interest[3] = create_interest(NPC[16], (sfIntRect) //player sprint
    {0, 0, 48, 48}, (sfVector2f){800, 780}, &nothing);
    Set_Scale(interest[3].body.sprite, 3, 3);
    return (interest);
}
