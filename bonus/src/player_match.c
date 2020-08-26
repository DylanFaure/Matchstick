/*
** EPITECH PROJECT, 2020
** player_match.c
** File description:
** player_match
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int player_match(int maxdel)
{
    char *match = NULL;
    size_t len = 0;
    int nb_match = 0;
    int verif_nb = 0;

    my_putstr("Matches: ");
    if (getline(&match, &len, stdin) == -1)
        return (-2);
    nb_match = my_getnbr(match);
    verif_nb = verif_nb_match(nb_match, match, maxdel);
    if (verif_nb == -1)
        return (-1);
    return (nb_match);
}
