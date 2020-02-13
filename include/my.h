/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>

int my_putstr(char *str);
DIR *open_and_read(DIR *dir_repo);
int boostrap(int ac, char **av);
int my_putchar(char c);
int my_putcerror(char c);
int my_putnbr(int nb);
int	my_strcmp(char *s1, char *s2);
int my_strlen(char const *str);
int my_putstr_error(char *c);

#endif /* !MY_H_ */
