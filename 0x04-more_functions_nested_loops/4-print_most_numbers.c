#include "main.h"

/**
 * print_most_numbers - checks for checks for a digit(0 through 9)
 *
 * Return: Alwasy 0.
 */
void print_most_numbers(void)
{
int C;
for (C = 48; C < 58; C++)
{
if (C != 50)
{
if (C != 52)
{
_putchar(C);
}
}
}
_putchar('\n');
}
