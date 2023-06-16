#include <stdio.h>

/**
 *main- Entry Point
 *
 *Return: 0 Always
*/

int main(void)
{
	int z;

	z = 'z';
	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
