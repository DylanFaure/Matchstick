/*
** EPITECH PROJECT, 2020
** verif_ai_line.c
** File description:
** verif ai line
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verif_ai_line(int line_position, int nb_lines, char **map)
{
    int nb_stick = 0;

    line_position = (rand() % nb_lines) + 1;
    for (int count = 0; map[line_position][count] != '\n'; count++)
        if (map[line_position][count] == '|')
            nb_stick++;
    if (nb_stick == 0) {
        line_position++;
        if (line_position > nb_lines)
            line_position = 1;
        line_position = verif_ai_line(line_position, nb_lines, map);
    }
    return (line_position);
}
