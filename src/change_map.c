/*
** EPITECH PROJECT, 2020
** change_map.c
** File description:
** change map after verif
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **change_map(int line_position, int nb_match, char **map)
{
    int first_stick_del = 0;

    for (; map[line_position][first_stick_del] != '|'; first_stick_del++);
    for (; map[line_position][first_stick_del + 1] == '|'; first_stick_del++);
    for (int count = 0; count + 1 <= nb_match; count++)
        map[line_position][first_stick_del - count] = ' ';
    return (map);
}
