#include "main.h"

/**
 *_strdup - duplicate a string
 *@str: the str to duplicate
 *Return: a new allocated string
*/

char *_strdup(char *str)
{
	int i;
	char *new;

	i = 0;
	if (!(*str))
		return (NULL);
	while (str[i])
		i++;
	if (i == 0)
	{
		new = (char *)malloc(1);
		if (!new)
			return (NULL);
		str[0] = 0;
		return (str);
	}
	new = (char *)malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
