#include "main.h"

/**
 *free_all - free everythign if it fails
 *@a: old double int tab
 *@i: last int allocated
 *Return: NADA
*/

void	free_all(int **a, int i)
{
	while (i >= 0)
	{
		free(a[i]);
		i--;
	}
	free(a);
}

/**
 *alloc_grid - create a 2 dimention array of int
 *@width: the lengh of the array
 *@height: the number of the array
 *Return: pointer to a 2d array of int
*/

int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(sizeof(int *) * height);
	if (!a)
		return (NULL);
	i = 0;
	while (i < height)
	{
		j = 0;
		a[i] = (int *)malloc(sizeof(int) * width);
		if (!a[i])
			return (free_all(a, i - 1), NULL);
		while (j < width)
		{
			a[i][j] = 0;
			j++;
		}
		i++;
	}
	return (a);
}
