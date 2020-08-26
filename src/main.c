/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    int nb_lines;
    int maxdel;
    int who_win;

    if (ac != 3)
        return (84);
    nb_lines = my_getnbr(av[1]);
    maxdel = my_getnbr(av[2]);
    if (nb_lines < 2 || nb_lines > 99 || maxdel <= 0)
        return (84);
    who_win = squaremap(nb_lines, maxdel);
    return (who_win);
}
