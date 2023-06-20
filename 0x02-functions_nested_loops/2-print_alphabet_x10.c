#include "main.h"

/**
 *print_alphabet - needed by x10
 *
 *Return: NADA void , doesn't ret anything
*/
void print_alphabet(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}

/**
 *print_alphabet_x10 - starting Point
 *
 *Return: NADA
*/
void print_alphabet_x10(void)
{
	int i;

	i = -1;
	while (++i < 10)
		print_alphabet();
}
