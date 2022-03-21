/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** my_put_nbr
*/

void my_putchar(char c);

static int rec_nb(int nb)
{
    if (nb > 9)
        return (rec_nb(nb / 10), rec_nb(nb % 10));
    else {
        my_putchar(nb + 48);
        return (nb % 10 + 48);
    }
    return (nb + 48);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        if (nb <= -2147483648) {
            my_putchar('-');
            my_putchar('2');
            my_putchar('1');
            my_putchar('4');
            my_putchar('7');
            my_putchar('4');
            my_putchar('8');
            my_putchar('3');
            my_putchar('6');
            my_putchar('4');
            my_putchar('8');
            return (0);
        }
        my_putchar('-');
        rec_nb(-1 * nb);
    } else
        rec_nb(nb);
    return (0);
}
