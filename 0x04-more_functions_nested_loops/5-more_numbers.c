#include "main.h"
/**
 * more numbers - functions that prints 10 times the number, from 0 to 24
 * _putchar only three times
 * Return:  0-14 10 times
 */
void more_numbers(void)
{
int i, j, digit;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
digit = j / 10;
_putchar(digit + '0');
}
digit = j % 10;
_putchar(digit + '0');
}
_putchar('\n');
}
}
