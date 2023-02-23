#include "main.h"
#include <stdio.h>
/**
 * print_square - function declaration
 * Description: prints a square  of hash symbols
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)

	{
	int row;
	int column;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}

