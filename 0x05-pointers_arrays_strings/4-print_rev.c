#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int liongi = 0;
	int o;

	while (*s != '\0')
	{
		liongi++;
		s++;
	}
	s--;
	for (o = liongi; o > 0; o--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
