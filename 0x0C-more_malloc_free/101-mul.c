#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void	_puts(char *str);

/**
 *opti_atoi - in this version it return error if ti find an alpha
 *@str: the str to change
 *Return: an int
*/

int	opti_atoi(char *str)
{
	int i;
	unsigned long int result;
	int signe;

	i = 0;
	result = 0;
	signe = 1;
	while ((str[i] == '-') && str[i])
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result * signe);
}

/**
 *printf_r - something to print , maybe printf isn;t allowed
 *@num: num to print
 *Return: NADA
*/
void	printf_r(unsigned long int num)
{
	unsigned long int div = 1;
	int pt;

	while (num / div > 9)
		div *= 10;
	while (div >= 1)
	{
		pt = num / div;
		_putchar('0' + pt);
		num %= div;
		div /= 10;
	}
	_putchar('\n');
}

/**
 *_puts - print str
 *@str: the str
 *Return: no return
*/

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 *main - programe that giv the multiple of 2 num
 *@ac: number of argument
 *@av: arguments
 *Return: 0 or 98 in error
*/

int main(int ac, char **av)
{
	int i = 1, j = 0, signe = 1;
	long int n;

	if (ac == 3)
	{
		if (av[1][0] == 0 || av[2][0] == 0)
		{
			printf("Error\n");
			exit(98);
		}
		while (av[i])
		{
			j = 0;
			while (av[i][j] == '-' && av[i][j])
				j++;
			while (av[i][j])
			{
				if (av[i][j] > 57 || av[i][j] < 48)
				{
					printf("Error\n");
					exit(98);
				}
				j++;
			}
			i++;
		}
		if (signe == -1)
			printf("-");
		n = atol(av[1]) * atol(av[2]);
		printf("%ld\n", n);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
