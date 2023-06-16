#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: 0 always
 *
*/

int main(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
