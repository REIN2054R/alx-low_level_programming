#include "main.h"

/**
 *is_not - name
 *@c: in
 *Return: 1 or 0
*/

int is_not(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';'
	|| c == '.' || c == '!' || c == '?' || c == '"'
	|| c == '(' || c == ')' || c == '{' || c == '}')
		return (1);
	return (0);
}

/**
 *cap_string - cap every zord
 *@str: the string to up
 *Return: the string upped
*/

char *cap_string(char *str)
{
	int i;

	i = 1;
	if (!str)
		return (NULL);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] && str[i + 1])
	{
		if ((is_not(str[i])) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
