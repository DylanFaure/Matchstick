/*
** EPITECH PROJECT, 2020
** filled_map.c
** File description:
** filled_map
*/

#include "../include/my.h"

int filled_map(int lines, int maxdel, char **map)
{
    int nbstick = 1;
    int posfirststick = lines;
    int who_win;

    for (int count1 = 1; count1 <= lines; count1++) {
        for (int count2 = 1; count2 <= nbstick; count2++) {
            map[count1][posfirststick] = '|';
            if (count2 < nbstick)
                posfirststick++;
        }
        posfirststick -= nbstick;
        nbstick += 2;
    }
    who_win = matchstick(lines, maxdel, map);
}
