#include "main.h"

/**
 *swap_int - change the content of a and b
 *
 *@a: 1st var
 *@b: second one
 *return: NADA
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = *a;
}
