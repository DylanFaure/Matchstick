/*
** EPITECH PROJECT, 2020
** verif_nb_line.c
** File description:
** verif nb line after player play
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verif_nb_line(int line_position, char *line, int nb_lines)
{
    int size = 0;

    for (; line[size] != '\n'; size++) {
        if (line[size] < '0' || line[size] > '9') {
            my_putstr("Error: invalid input (positive number expected)\n");
            return (-1);
        }
    }
    if (line_position <= 0 || line_position > nb_lines) {
        my_putstr("Error: this line is out of range\n");
        return (-1);
    }
    return (0);
}
