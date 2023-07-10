#include "main.h"

/**
 *create_array - start function
 *@size: size of the array
 *@c: first char in the first array
 *Return: a char
*/

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size <= 0)
		return (NULL);
	str = (char *)malloc(size);
	if (!str)
		return (NULL);
	str[0] = c;
	return (str);
}
