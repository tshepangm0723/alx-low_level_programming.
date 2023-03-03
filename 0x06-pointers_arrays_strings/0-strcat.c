#include "main.h"
/**
 * _strcpy - function that concatenates two strings.
 * @dest: seconf string
 * @src: first string
 * Return: concatenates two strings.
 */

char *_strcat(char *dest, char *src);

/**
 * _strcat - function
 * @dest: second string
 * @src: first string
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	char *t = dest;

	while (*t != '\0')
	{
		t++;
	}
	while (*src != '\0')
	{
		*t++ = *src++;
	}
	*t = '\0';
	return (dest);
}
