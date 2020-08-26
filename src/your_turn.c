/*
** EPITECH PROJECT, 2020
** your_turn.c
** File description:
** fonction use when it's player turn
*/

#include "../include/my.h"
#include "../include/matchstick.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **continu_your_turn(struct continu test)
{
    int sticks_line;

    if (test.nb_match == -1)
        your_turn(test.nb_lines, test.maxdel, test.map);
    else if (test.nb_match == -2)
        return NULL;
    else {
        sticks_line = verif_change_map(test.map, test.line_position,
                                        test.nb_match);
        if (sticks_line == -1)
            your_turn(test.nb_lines, test.maxdel, test.map);
        else {
            test.map = change_map(test.line_position, test.nb_match, test.map);
            player_remove(test.nb_match, test.line_position);
        }
    }
    return (test.map);
}

char **your_turn(int nb_lines, int maxdel, char **map)
{
    struct continu test;

    test.line_position = player_line(nb_lines);
    if (test.line_position == -1)
        your_turn(nb_lines, maxdel, map);
    else if (test.line_position == -2)
        return NULL;
    else {
        test.nb_match = player_match(maxdel);
        if (test.nb_match == -2)
            return NULL;
        test.nb_lines = nb_lines;
        test.maxdel = maxdel;
        test.map = map;
        continu_your_turn(test);
    }
    return (map);
}
