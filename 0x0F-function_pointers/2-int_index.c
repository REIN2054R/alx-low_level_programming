#include "function_pointers.h"

/**
 *int_index - look up for an intiger
 *@array: where to look for the intiger
 *@size: mandatory if we watn to work safe on a tab
 *@cmp: fct to compare
 *Return: the index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
