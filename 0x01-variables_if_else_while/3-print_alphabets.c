#include <stdio.h>

/**
 *main- Entry point
 *
 *Return: 0 always
 *
*/

int main(void)
{
	int a;
	int b;

	a = 'a';
	b = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
