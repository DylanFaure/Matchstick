/*
** EPITECH PROJECT, 2020
** ai_remove.c
** File description:
** put what's ai remove
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ai_remove(int nb_match, int line_position)
{
    my_putstr("AI removed ");
    my_put_nbr(nb_match);
    my_putstr(" match(es) from line ");
    my_put_nbr(line_position);
    my_putchar('\n');
}
