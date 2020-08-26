/*
** EPITECH PROJECT, 2020
** verif_end.c
** File description:
** verif if game is finish
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int count_end(char **map, int nb_lines)
{
    int end = 0;

    for (int count1 = 1; count1 <= nb_lines; count1++) {
        for (int count2 = 1; count2 != nb_lines * 2; count2++) {
            if (map[count1][count2] == '|')
                end++;
        }
    }
    return (end);
}
int verif_end(char **map, int nb_lines, int who_play)
{
    int end = count_end(map, nb_lines);

    if (end > 0)
        return (0);
    else {
        if (who_play == 0) {
            print_map(map, nb_lines);
            my_putstr("I lost... snif... but I'll get you next time!!\n");
            return (1);
        } else {
            print_map(map, nb_lines);
            my_putstr("You lost, too bad...\n");
            return (2);
        }
    }
    return (-1);
}
