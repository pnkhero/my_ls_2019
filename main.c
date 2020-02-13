/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include "./include/my.h"

DIR *open_and_read(DIR *dir_repo)
{
    struct dirent *ep;

    if (dir_repo == NULL)
        return (0);
    while ((ep = readdir(dir_repo)) != NULL) {
        if ((ep->d_name[0]) != '.')  {
        my_putstr(ep->d_name);
        my_putchar('\n');
        }
    }
    return (dir_repo);
}

void check_dir(char *filepath)
{
    if (opendir(filepath) == NULL) {
        perror("ls");
        exit(84);
    }
}

int main(int ac, char **av)
{
    struct dirent *ep;

    if (ac == 1) {
        check_dir(".");
        open_and_read(opendir("."));
    }
    else if (ac == 2 && av[1][1] != '-') {
        check_dir(av[1]);
        open_and_read(opendir(av[1]));
    }
}