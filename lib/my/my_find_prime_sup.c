/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    for (int i = nb ; i < 2147483647 ; i++) {
        if (my_is_prime(i))
            return (i);
    }
}
