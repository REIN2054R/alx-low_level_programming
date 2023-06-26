#include "main.h"

/**
 *_atoi - asci to int
 *
 *@s: the string to change
 *Return: int , th number
**/

int _atoi(char *s)
{
	int i = 0, result = 0, signe = 1;

	while (s[i] && s[i] == ' ' && s[i] == '\t')
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[1] == '-')
			singe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		result = (result * 10) + str[i] - 48;
		i++;
	}
	return (result * signe);
}
