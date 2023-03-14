#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: string value
 */
char *str_concat(char *s1, char *s2);

/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: string value
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int j;
	int concat_j = 0;
	int len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (j = 0; s1[j] || s2[j]; j++)
		len++;

	new_str = malloc(sizeof(char) * len);

	if (new_str == NULL)
		return (NULL);

	for (j = 0; s1[j]; j++)
		new_str[concat_j++] = s1[j];

	for (j = 0; s2[j]; j++)
		new_str[concat_j++] = s2[j];

	return (new_str);
}
