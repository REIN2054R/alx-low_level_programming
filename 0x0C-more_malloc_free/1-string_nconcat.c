#include "main.h"

/**
 *string_nconcat - cat 2 string
 *@s1: 1st string
 *@s2: 2nd strig
 *@n: number to cat
 *Return: big string concated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len1;
	char *ret;

	i = 0;
	len1 = 0;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len1])
		len1++;
	ret = malloc(sizeof(char) * (len1 + n + 1));
	if (!ret)
		return (NULL);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	len1 = 0;
	while (s2[len1] && len1 < n)
	{
		ret[i] = s2[len1];
		i++;
		len1++;
	}
	ret[i] = 0;
	return (ret);
}
