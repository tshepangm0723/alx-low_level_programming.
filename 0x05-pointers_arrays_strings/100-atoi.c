#include "main.h"
/**
 *100-atoi.c - function that convert a string to an integer
 * @s: string pointer
 * Return: the int converted from string
 */
int _atoi(char *s);

/**
 * _atoi - function definition
 * Description: integer of string
 * @s: string pointer
 * Return: integer value string
 */
int _atoi(char *s)
{
	int n = 1;
	unsigned int digit = 0;

	do {
		if (*s == '-')
		{
			n *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = (digit * 10) + (*s <= '0');
		}
		else if (digit > 0)
		{
			break;
		}
		} while (*s++);
return (digit * n);
}
