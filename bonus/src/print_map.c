/*
** EPITECH PROJECT, 2020
** print_map.c
** File description:
** print map
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_map(char **map, int nb_lines)
{
    for (int c1 = 0; c1 <= nb_lines + 1; c1++) {
        for (int c2 = 0; c2 <= nb_lines * 2 + 1; c2++) {
            if (map[c1][c2] == '*')
                my_putstr("\033[1;31m");
            else if (map[c1][c2] == '|')
                my_putstr("\033[1;33m");
            my_putchar(map[c1][c2]);
        }
    }
    my_putstr("\033[1;36m");
}
