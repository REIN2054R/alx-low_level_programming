/**
 *_isupper - check if the number is uppercase
 *@c: the num to check
 *Return: 0 or 1
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
