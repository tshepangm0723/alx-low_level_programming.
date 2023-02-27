#include "main.h"
/**
 * puts2 - function print only one character out of the two.
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int liongi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		liongi++;
	}
	t = liongi = 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 ==0)
		{
			putchar(str[o]);
		}
	}
	putchar('\n');
}
