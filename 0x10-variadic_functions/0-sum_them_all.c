#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters passed to the function
 * @...: variable number of parameters to calculate the sum of
 * Return: if n == 0 - 0
 * otherwisshe - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int j = 0, sum = 0;

va_start(ap, n);

for (j = 0; j < n; j++)
{
	int i = va_arg(ap, const unsigned int);

	sum += i;

}
va_end(ap);
return (sum);
}
