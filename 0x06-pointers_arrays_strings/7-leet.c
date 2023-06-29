#include "main.h"

/**
 *leet - name
 *@str: to change
 *Return: str changed
*/

char *leet(char *str)
{
	int i, j;
	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
		}
	}
	return (str);
}
