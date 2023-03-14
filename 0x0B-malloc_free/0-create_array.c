#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @c: char to initialize array with
 * @size: size of array to create
 * Return: char value
 */

char *create_array(unsigned int size, char c);
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @c: char to initialize array with
 * @size: size of array to create
 * Return: char value
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
