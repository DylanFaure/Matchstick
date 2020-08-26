/*
** EPITECH PROJECT, 2020
** ai_match.c
** File description:
** ai choose match
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calc_nb_stick(int line_position, char **map)
{
    int nb_stick = 0;

    for (int count = 0; map[line_position][count] != '\n'; count++)
        if (map[line_position][count] == '|')
            nb_stick++;
    return (nb_stick);
}

int lines_with_stick(char **map, int nb_lines)
{
    int lines_sticks = 0;

    for (int c1 = 1; c1 <= nb_lines + 1; c1++)
        for (int c2 = 1; map[c1][c2] != '\n'; c2++)
            if (map[c1][c2] == '|') {
                lines_sticks++;
                c1++;
                c2 = 1;
            }
    return (lines_sticks);
}

int verif_filled_lines(int maxdel, int nb_match, int lines_sticks, int nb_stick)
{
    if (lines_sticks == 2 && nb_stick <= maxdel)
        nb_match = nb_stick;
    return (nb_match);
}

int ai_match(int maxdel, char **map, int line_position, int nb_lines)
{
    int nb_match = 0;
    int nb_stick = calc_nb_stick(line_position, map);
    int lines_sticks = lines_with_stick(map, nb_lines);

    nb_match = (rand() % maxdel - 1) + 1;
    if (nb_stick == 1)
        nb_match = 1;
    else if (nb_stick > 1 && nb_stick <= maxdel)
        nb_match = nb_stick - 1;
    else
        nb_match = maxdel;
    nb_match = verif_filled_lines(maxdel, nb_match, lines_sticks, nb_stick);
    return (nb_match);
}
