/*
** EPITECH PROJECT, 2020
** matchstick.c
** File description:
** matchstick
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matchstick(int nb_lines, int maxdel, char **map)
{
    int who_play = 1;
    int nb_verif_end = 0;

    while (nb_verif_end != 1 && nb_verif_end != 2) {
        print_map(map, nb_lines);
        my_putchar('\n');
        if (who_play == 1) {
            my_putstr("Your turn:\n");
            map = your_turn(nb_lines, maxdel, map);
            if (map == NULL)
                return (0);
        } else {
            my_putstr("AI's turn...\n");
            map = ai_turn(nb_lines, maxdel, map);
        }
        nb_verif_end = verif_end(map, nb_lines, who_play);
        who_play = (who_play == 1) ? 0 :  1;
    }
    return (nb_verif_end);
}
