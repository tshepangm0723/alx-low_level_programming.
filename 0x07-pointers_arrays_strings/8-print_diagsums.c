#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: the array to be used
 * @size: diagonal size
 * Return: void
 */
void print_diagsums(int *a, int size);

/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: the array to be used
 * @size: diagonal size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i*size + i);
		sum2 += *(a + i*size - 1 - i);
	}
	printf("sum of main disagonal: %d\n", sum1);
	printf("sum of secondary diagonal: %d\n", sum2);
}
