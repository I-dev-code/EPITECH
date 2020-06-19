/*
** EPITECH PROJECT, 2019
** function_free.c
** File description:
** free my buffer
*/

#include "n4s.h"

int free_tab(char **tab)
{
	int a;

	for (a = 0; tab[a]; a++)
		free(tab[a]);
	free(tab);
	return (0);
}