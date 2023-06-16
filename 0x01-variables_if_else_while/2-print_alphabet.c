
#include <stdio.h>
/**
 *main - Starting point
 *
 *Return: 0 always (Success)
 *
*/

int main(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
