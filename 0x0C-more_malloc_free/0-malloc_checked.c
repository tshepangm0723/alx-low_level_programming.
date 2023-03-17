#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: integer to check
 * Returns: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b);
/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: integer to check
 * Returns: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
        void *pointer;

        pointer = malloc(b);

	if (pointer == NULL)
                exit(98);

        return (pointer);
}
