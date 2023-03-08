#include "main.h"
/**
 * factorial -  function that returns the factorial of a given number.
 * @n: given number
 * Return: factorial of a number
 */
int factorial(int n);

/**
 * factorial -  function that returns the factorial of a given number.
 * @n: given number
 * Return: factorial of a number
 */
int factorial(int n)
{
	int j = n;

	if (j < 0)
	{
		return (-1);
	}

	else if (j >= 0 && j <= 1)
	{
		return (1);
	}
	else
	{
		return (j * factorial(j - 1));
	}
}
