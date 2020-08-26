/*
** EPITECH PROJECT, 2020
** squaremap.c
** File description:
** squaremap
*/

#include "../include/my.h"
#include <stdlib.h>

int squaremap(int lines, int maxdel)
{
    int who_win;

    char **map = malloc(sizeof(char *) * (lines + 2));

    for (int count1 = 0; count1 != lines + 2; count1++)
        map[count1] = malloc(sizeof(char) * (lines * 2 + 2));
    for (int count2 = 0; count2 != lines + 2; count2++) {
        for (int count3 = 0; count3 != lines * 2 + 2; count3++) {
            if (count3 == 0 || count3 == lines * 2 || (count2 == 0 &&
                count3 < lines * 2 + 1) || (count2 == lines + 1 &&
                count3 < lines * 2 + 1))
                map[count2][count3] = '*';
            else if (count3 == lines * 2 + 1)
                map[count2][count3] = '\n';
            else
                map[count2][count3] = ' ';
        }
    }
    who_win = filled_map(lines, maxdel, map);
    return (who_win);
}
