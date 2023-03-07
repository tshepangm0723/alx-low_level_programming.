#include "main.h"
/**
 * memcpy - function that copies memory area
 * @dest: memory stored
 * @src: memory copied
 * @n: number of bytes
 * Return: copies memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _memcpy - function that copies memory area
 * @dest: memory stored
 * @src: memory copied
 * @n: number of bytes
 * Description: copies the src to dest n times
 * Return: copies memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
