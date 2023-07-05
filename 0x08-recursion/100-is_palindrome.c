#include "main.h"

/**
 *pali_ilap - check if it;s paliilap
 *@s: the string to look in
 *@i: going up to down
 *@j: going down to up
 *Return: 1 or 0
*/

int pali_ilap(char *s, int i, int j)
{
	if (i <= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (pali_ilap(s, i - 1, j + 1));
}

/**
 *is_palindrome - check if the strign is palindrome
 *@s: the string to check
 *Return: 0 or 1 if it;s palindrome
*/

int is_palindrome(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	i--;
	return (pali_ilap(s, i, 0));

}
