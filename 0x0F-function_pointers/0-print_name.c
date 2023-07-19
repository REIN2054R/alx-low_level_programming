#include "function_pointers.h"

/**
 *print_name - print a name
 *@name: nam to be printed
 *@f: the  fct that print
*/

void	print_name(char *name, void (*f)(char *))
{
	f(name);
}
