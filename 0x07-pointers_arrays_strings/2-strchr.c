#include "main.h"
/**
 * _strchr - funtion that locates a character in a string.
 * @s: the string
 * @c: the character
 * Return: character
 */

char *_strchr(char *s, char c);
/**
 * * _strchr - funtion that locates a character in a string.
 * @s: the string
 * @c: the character
 * Description: finds a character in string
 * Return: character value
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}
	if (s[j] == c)
	{
		return (s + j);
	}
	return (0);
}
