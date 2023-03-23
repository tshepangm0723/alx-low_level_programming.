#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @n: the number of integers passed to the function
 * @separator: the string to be printed between numbers
 * @...: the number of integrs passed to the function
 * Return: if seperator == NULL dont print
 * otherwise numers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int j;

	va_start(nums, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(nums, int));

		if (j != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("\n");

		va_end(nums);
	}
}
