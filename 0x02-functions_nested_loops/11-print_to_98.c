#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
	{
	int start;

	if (n > 98)
	{
		for (start = n; start >= 98; start--)
		{
			printf("%d", start);
			if (start != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (start = n; start <= 98; start++)
		{
			printf("%d", start);
			if (start != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
