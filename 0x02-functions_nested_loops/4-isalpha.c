#include "main.h"
/**
 * _isalpha - Shows 1 if the input is a letter
 * And other cases show 0
 *
 * @c: The char to be checked
 *
 * Return: 1 for letters, otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <=90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
