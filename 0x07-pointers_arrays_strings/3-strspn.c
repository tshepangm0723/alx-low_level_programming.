#include "main.h"
/**
 * strspn - funtion that gets the length of a prefix substring
 * @s: string to search
 * @accept: the prefix substring to be tested
 * Description: returns no of bytes in s
 * Return: no of byes
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strspn - funtion that gets the length of a prefix substring
 * @s: string to search
 * @accept: the prefix substring to be tested
 * Description: returns no of bytes in s
 * Return: no of byes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				bytes++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}
