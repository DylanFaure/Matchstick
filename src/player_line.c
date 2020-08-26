/*
** EPITECH PROJECT, 2020
** player_line.c
** File description:
** player choose line
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int player_line(int nb_lines)
{
    char *line = NULL;
    size_t len = 0;
    int line_position = 0;
    int verif_nb = 0;

    my_putstr("Line: ");
    if (getline(&line, &len, stdin) == -1)
        return (-2);
    line_position = my_getnbr(line);
    verif_nb = verif_nb_line(line_position, line, nb_lines);
    if (verif_nb == -1)
        return (-1);
    return (line_position);
}
