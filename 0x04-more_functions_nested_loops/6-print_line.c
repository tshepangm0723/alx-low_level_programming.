#include "main.h"
#include <stdio.h>
/**
 * print_line - function declaration
 * Description: print dashes n times
 * @n: number of dashes to print
 * Return: has no return values
 */
void print_line(int n)
{
	int counter = 0;

	while (n > 0 && counter < n)
	{
		putchar('_');
		counter++;
	}
	putchar('\n');
}
