#include "main.h"
#include <stdio.h>
/**
 * print most numbers - Function thta print the numbers, fron 0 to 9
 * Return: 0-9 except 2 and 4
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number == 2 || number == 4)
		{
			continue;
		}
		else
		{
			putchar(number + '0');
		}
	}
	putchar('\n');
}

