/*
** EPITECH PROJECT, 2021
** my_compute_square_root
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int nb_sr;

    if (nb < 0)
        return (0);
    for (int i = 0; i <= nb; i++) {
        if (i * i == nb)
            return (i);
    }
    return (0);
}
