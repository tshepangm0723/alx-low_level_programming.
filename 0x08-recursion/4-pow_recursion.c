#include "main.h"
#include <math.h>
/**
 * _pow_recursion - function that returns the value of x raised to the power of y
 * @y: the power
 * @x: the number to be raised
 * Return: value
 */
int _pow_recursion(int x, int y);

/**
 * _pow_recursion - function that returns the value of x raised to the power of y
 * @y: the power
 * @x: the number to be raised
 * Return: value
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * pow(x, y - 1));
	}
}
