#include "main.h"

/**
 *_strlen - return the size o fa string
 *
 *@s: pointer to the first character of the string
 *Return: i the size of s
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (-1);
	while (str[i])
		i++;
	return (i);
}
