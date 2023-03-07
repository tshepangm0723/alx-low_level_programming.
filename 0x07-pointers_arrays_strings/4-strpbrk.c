#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: bytes to search for
 * Description: searches for a string of a set of bytes
 * Return: pointer to NULL
 */

char *_strpbrk(char *s, char *accept);

/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: bytes to search for
 * Description: searches for a string of a set of bytes
 * Return: pointer to NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int str_j;
	int sub_str_j;

	for (str_j = 0; s[str_j] != '\0'; str_j++)
	{
		for (sub_str_j = 0; accept[sub_str_j] != '\0'; sub_str_j++)
		{
			if (s[str_j] == accept[sub_str_j])
			{
				return (s + str_j);
			}
		}
	}
	return (0);
}
