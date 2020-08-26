/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** compilation of fonction 
*/

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
void my_put_nbr(int nb);
void my_putstr(char const *str);
int my_getnbr(char const *str);
int squaremap(int lines, int maxdel);
int filled_map(int lines, int maxdel, char **map);
int matchstick(int lines, int maxdel, char **map);
int verif_nb_line(int line_position, char *line, int nb_lines);
int player_line(int nb_lines);
int verif_nb_match(int nb_match, char *match, int maxdel);
int player_match(int maxdel);
int verif_change_map(char **map, int line_position, int nb_match);
char **change_map(int line_position, int nb_match, char **map);
void player_remove(int nb_match, int line_position);
char **your_turn(int nb_lines, int maxdel, char **map);
int verif_end(char **map, int nb_lines, int who_play);
int verif_ai_line(int line_position, int nb_lines, char **map);
int ai_line(int nb_lines, char **map);
int ai_match(int maxdel, char **map, int line_position, int nb_lines);
void ai_remove(int nb_match, int line_position);
char **ai_turn(int nb_lines, int maxdel, char **map);
void print_map(char **map, int nb_lines);

#endif
