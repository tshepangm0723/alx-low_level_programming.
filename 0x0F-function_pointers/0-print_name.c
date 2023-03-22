#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function that prints a name.
 * @name: string to add
 * @f: pointer to function
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
        if (name != NULL && f != NULL)
        {
                f(name);
        }
}
