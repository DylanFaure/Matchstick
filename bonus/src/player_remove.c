/*
** EPITECH PROJECT, 2020
** player_remove.c
** File description:
** print what's player have change
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void player_remove(int nb_match, int line_position)
{
    my_putstr("Player removed ");
    my_put_nbr(nb_match);
    my_putstr(" match(es) from line ");
    my_put_nbr(line_position);
    my_putchar('\n');
}
