#include "main.h"
/**
 * _sqrt_recursion - returns the natural square of a number
 * @n: no to calculate the square root
 * Return: the resulting square root
 */
int _sqrt_recursion(int n);


#include "main.h"
/**
 * _sqrt_recursion - returns the natural square of a number
 * @n: no to calculate the square root
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - returns the natural square of a number
 * @n: no to calculate the square root
 * @i: iterator
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
