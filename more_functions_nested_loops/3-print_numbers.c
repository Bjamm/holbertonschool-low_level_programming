#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 * followed by a new line
 * Return: always succes (0)
 */
void print_numbers(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
_putchar(digit);
}
_putchar('\n');
}
