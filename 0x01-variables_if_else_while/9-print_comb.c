#include <stdio.h>

/**
 *main- Start
 *
 *Return: 0
*/

int main(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
