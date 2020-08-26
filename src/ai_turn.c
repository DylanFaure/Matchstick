/*
** EPITECH PROJECT, 2020
** ai_turn.c
** File description:
** ai turn
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **ai_turn(int nb_lines, int maxdel, char **map)
{
    int line_position = ai_line(nb_lines, map);
    int nb_match = ai_match(maxdel, map, line_position, nb_lines);

    map = change_map(line_position, nb_match, map);
    ai_remove(nb_match, line_position);
    return (map);
}
