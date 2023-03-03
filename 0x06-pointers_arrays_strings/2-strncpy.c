#include "main.h"

/**
 * strncpy -  function that copies a string
 * @dest: string 2
 * @src: string 1
 * @n:number of times
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * strncpy -  function that copies a string
 * @dest: string 2
 * @src: string 1
 * @n:number of times
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *t = dest;
	int i = 0;

	while (i < n && *src != '\0')
	{
		*t++ = *src++;
		i++;
	}
	while (i < n)
	{
		*t++ = '\0';
		i++;
	}
	return (dest);
}
