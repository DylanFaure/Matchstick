/*
** EPITECH PROJECT, 2020
** verif_nb_match.c
** File description:
** verif nb match after player play
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verif_nb_match(int nb_match, char *match, int maxdel)
{
    int size = 0;

    for (; match[size] != '\n'; size++) {
        if (match[size] < '0' || match[size] > '9') {
            my_putstr("Error: invalid input (positive number expected)\n");
            return (-1);
        }
    }
    if (nb_match <= 0 || nb_match > maxdel) {
        if (nb_match <= 0)
            my_putstr("Error: you have to remove at least one match\n");
        else {
            my_putstr("Error: you cannot remove more than ");
            my_put_nbr(maxdel);
            my_putstr(" matches per turn\n");
        }
        return (-1);
    }
    return (0);
}
