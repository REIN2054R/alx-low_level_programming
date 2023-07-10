#include "main.h"

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
	if (!s1)
		s1[0] = 0;
	if (!s2)
		s2[0] = 0;
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
