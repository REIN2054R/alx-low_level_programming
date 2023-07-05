#include "main.h"
/**
 *_print_rev_recursion - still cant find the recursion
 *@s: print
 *Return: NADA
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
