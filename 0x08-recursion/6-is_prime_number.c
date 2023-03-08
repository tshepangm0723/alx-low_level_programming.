#include "main.h"
#include <math.h>

/**
 * actua_prime - calculates if a number is prime
 * @n: number of evaluate
 * @i: iterator
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
    {
return (0);
    }

for (i = 2; i <= sqrt(n); i++)
{
if (n % i == 0)
	{
return (0);
}
}
return (1);
}
