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
	if (!str)
		return (NULL);
	while (str[i])
		i++;
	if (i == 0)
	{
		new = (char *)malloc(1);
		if (!new)
			return (NULL);
		new[0] = 0;
		return (new);
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

/**
 *str_concat - concat 2 string
 *@s1: the first string
 *@s2: the second string
 *Return: new big string
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *new;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	new = (char *)malloc(i + j + 1);
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = 0;
	return (new);
}
