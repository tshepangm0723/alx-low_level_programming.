#include "main.h"
#include <stddef.h>
/**
 * _strncat - function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of times
 * Return: two strings
 */

char *_strncat(char *dest, char *src, int n);

/**
 * strncat - function
 * @dest: second string
 * @src: first string
 * @n:number of times
 * Return: character
 */

char *_strncat(char *dest, char *src, int n)
{
	char *t = dest;

	while (*t != '\0')
	{
		t++;
	}
	while (*t < n && *src != '\0')
	{
		*t++ = *src++;
	}
	*t = '\0';
	return (dest);
}
