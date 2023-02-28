#include "main.h"
#include "2-strlen.c"
/**
 * strcpy - function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src);

/**
 * _strcpy - function declaration
* Description: copies string
* @dest: copy to	 
* @src: copy from
* Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; index <= _strlen(src); index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
