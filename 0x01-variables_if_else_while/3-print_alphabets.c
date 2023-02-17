#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lower case
 * and in upper case, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	put char('\n');
	return (0);
}
