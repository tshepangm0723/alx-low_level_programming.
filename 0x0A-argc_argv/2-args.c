#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments receives.
 * @argv: argument array
 * @argc: number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i + 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
