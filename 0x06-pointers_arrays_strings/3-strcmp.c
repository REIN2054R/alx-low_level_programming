#include "main.h"

/**
 *_strcmp - compare 2 string
 *@s1: stringnum 1
 *@s2: string num2
 *Return: int o ret
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
