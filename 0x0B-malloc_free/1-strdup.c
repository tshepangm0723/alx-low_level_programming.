#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - function that rturns pointer
 * @str: string
 * Return: string
 */

char *_strdup(char *str);

/**
 * _strdup - function that rturns pointer
 * @str: string
 * Return: string
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}


