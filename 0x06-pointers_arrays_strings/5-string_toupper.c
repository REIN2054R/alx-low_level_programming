#include "main.h"

/**
 *string_toupper - change lower case to uper
 *@str: the string to go up
 *Return: string upper
*/

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
		i++;
	}
	return (str);
}
