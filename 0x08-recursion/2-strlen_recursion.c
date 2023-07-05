#include "main.h"

/**
 *_strlen_recursion - recu strlen
 *@s: the string that we want to get he s size
 *Return: int , a size
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
