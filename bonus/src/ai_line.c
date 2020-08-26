/*
** EPITECH PROJECT, 2020
** ai_line.c
** File description:
** ai choose line
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ai_line(int nb_lines, char **map)
{
    int line_position = 0;

    line_position = verif_ai_line(line_position, nb_lines, map);
    return (line_position);
}
