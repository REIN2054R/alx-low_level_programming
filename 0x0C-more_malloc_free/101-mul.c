#include "main.h"

/**
 *opti_atoi - in this version it return error if ti find an alpha
 *@str: the str to change
 *Return: an int
*/

int	opti_atoi(char *str)
{
	int i;
	long result;
	long signe;

	i = 0;
	result = 0;
	signe = 1;
	while ((str[i] == ' ' || str[i] == '\t') && str[i])
		i++;
	while (((str[i] == '-') || (str[i] == '+')) && str[i])
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		i++;
		if (result > INT_MAX && signe == 1)
			return ((void)printf("Error\n"), exit(98), -1);
		if (result > 2147483648 && signe == -1)
			return ((void)printf("Error\n"), exit(98), -1);
	}
	if (str[i])
		return ((void)printf("Error\n"), exit(98), -1);
	return (result * signe);
}

/**
 *main - programe that giv the multiple of 2 num
 *@ac: number of argument
 *@av: arguments
 *Return: 0 or 98 in error
*/

int main(int ac, char **av)
{
	int num1;
	int num2;

	if (ac == 2)
	{
		num1 = opti_atoi(av[1]);
		num2 = opti_atoi(av[2]);
		return (printf("%d\n", num1 * num2));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
