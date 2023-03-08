#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string to be printed
 * Decription: finds length of a string
 * Return: string length
 */

int _strlen_recursion(char *s);

/**
 * _strlen_recursion - unction that returns the length of a string.
 * @s: string to be printed
 * Decription: finds length of a string
 * Reurn: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = _strlen_recursion(s + 1);
		return (len = len + 1);
	}
	return (0);
}
