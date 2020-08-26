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
    for (int count = 0; count != nb_lines + 2; count++)
        my_putstr(map[count]);
}
