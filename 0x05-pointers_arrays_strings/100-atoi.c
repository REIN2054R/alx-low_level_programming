#include "main.h"

/**
 *_atoi - asci to int
 *
 *@s: the string to change
 *Return: int , th number
**/

int _atoi(char *s)
{
	int i = 0, signe = 1;
	unsigned int result = 0;

	while (s[i] && s[i] == ' ' && s[i] == '\t')
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[1] == '-')
			signe *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9' && s[i])
	{
		result = (result * 10) + s[i] - 48;
		i++;
	}
	return (result * signe);
}
