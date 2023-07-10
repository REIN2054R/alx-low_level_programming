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
	int i;

	i = 0;
	if (size <= 0)
		return (NULL);
	str = (char *)malloc(size);
	if (!str)
		return (NULL);
	while (i < size - 1)
	{
		str[i] = c;
		i++;
	}
	str[i] = 0;
	return (str);
}
