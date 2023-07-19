#include "function_pointers.h"

/**
 *array_iterator - execute function to each element of the array
 *@array: array to execute cmd on
 *@size: we need size ehne we work with tbal of int
 *@action: the name of the function
*/

void	array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (!array || !size || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
