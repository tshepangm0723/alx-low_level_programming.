#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte.
 * @n: number of bytes to be changed
 * @b: the desired value
 * @s: starting address of memory to be filled
 * Reruen: change arry with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * *_memset - function that fills memory with a constant byte.
 * @n: number of bytes to be changed
 * @b: the desired value
 * @s: starting address of memory to be filled
 * Reruen: change arry with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
