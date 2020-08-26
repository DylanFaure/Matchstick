/*
** EPITECH PROJECT, 2020
** verif_change_map.c
** File description:
** verif if program can change map without error
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verif_change_map(char **map, int line_position, int nb_match, int nb_lines)
{
    int sticks_line = 0;

    for (int count = 0; map[line_position][count] != '\n'; count++)
        if (map[line_position][count] == '|')
            sticks_line++;
    if (nb_match > sticks_line) {
        my_putstr("Error: not enough matches on this line\n");
        return (-1);
    }
    return (sticks_line);
}
