#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that prints each
 * array element on a new line
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		exit(98);

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
