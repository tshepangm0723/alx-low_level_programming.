#include "main.h"
/**
 * *_strstr - function that locates a substring.
 * @haystack: the string to be searched
 * @needle: the substring
 * Return: string or NULL
 */
char *_strstr(char *haystack, char *needle);

/**
 * *_strstr - function that locates a substring.
 * @haystack: the string to be searched
 * @needle: the substring
 * Return: string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int hay_j;
	int needle_j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (hay_j = 0; haystack[hay_j] != '\0'; hay_j++)
	{
		if (haystack[hay_j] == needle[0])
		{
			for (needle_j = 0; needle[needle_j] != '\0'; needle_j++)
			{
				if (haystack[hay_j + needle_j] != needle[needle_j])
						{
						break;
						}
			}
			if (needle[needle_j] == '\0')
			{
				return (haystack + hay_j);
			}
		}
	}
	return ('\0');
}
