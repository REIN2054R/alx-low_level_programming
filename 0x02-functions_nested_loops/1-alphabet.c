#include "main.h"

/**
 *print_alphabet - Starrting point
 *
 *Return: Nothing , void
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
