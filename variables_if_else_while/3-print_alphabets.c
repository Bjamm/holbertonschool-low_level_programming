#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 *
 */
int main(void)
{
	char lowerbet = 'a';
	char alphabet = 'A';

	while (lowerbet <= 'z')
	{
		putchar(lowerbet);
		lowerbet++;
	}
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
