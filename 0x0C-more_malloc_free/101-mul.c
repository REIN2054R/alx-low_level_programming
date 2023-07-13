#include "main.h"

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
		if (result > INT_MAX && signe == 1)
			return ((void)_puts("Error\n"), exit(98), -1);
		if (result > 2147483648 && signe == -1)
			return ((void)_puts("Error\n"), exit(98), -1);
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
	if (ac == 3)
	{
		printf_r(opti_atoi(av[1]) * opti_atoi(av[2]));
	}
	else
	{
		_puts("Error\n");
		exit(98);
	}
	return (0);
}
