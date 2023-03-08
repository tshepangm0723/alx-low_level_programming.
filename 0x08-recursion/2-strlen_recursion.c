#include "main.h"
/**
 * 2-strlen_recursion.c - unction that returns the length of a string.
 * @s: string to be printed
 * Reurn: length of string
 */
int _strlen_recursion(char *s);

/**
 * 2-strlen_recursion.c - unction that returns the length of a string.
 * @s: string to be printed
 * Reurn: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
