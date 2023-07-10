#include "main.h"

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
			return (NULL);
		while (j < width)
		{
			a[i][j] = 0;
			j++;
		}
		i++;
	}
	return (a);
}
