#include "main.h"

/**
 *_strstr - check if a string is on another string
 *@haystack: big string
 *@needle: the sstring that we are loking for
 *Return: the string if exist
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i + j])
	{
		while (haystack[i + j] == needle[j])
			j++;
		if (needle[j] == 0)
			return (haystack[i]);
		i++;
		j = 0;
	}
	return (0);
}
