#include "main.h"

/**
 *free_grid - free 2 d array
 *@grid: the tab 2 feee
 *@height: the size to free
 *Return: No return
*/

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	if (!grid || !(*grid))
		return;
	while (i < height)
	{
		free(grid(i));
		i++;
	}
	free(grid);
}
