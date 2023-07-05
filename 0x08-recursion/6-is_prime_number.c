#include "main.h"

/**
 *find_prime - find prime number
 *@n: find the n number
 *@i: check if i divide n
 *Return: 1 or 0
*/
int find_prime(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	return (n, i + 1);
}

/**
 *is_prime_number - find prime number
 *@n: the number to find
 *Return: retrn 1 or 0 if it's prime or not
*/
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (find_prime(n, 2));
}
