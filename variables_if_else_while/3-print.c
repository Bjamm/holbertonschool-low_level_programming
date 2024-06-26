#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 *
 */
int main(void)
{
	char lowerbet;
	char alphabet;

	for (lowerbet = 'a'; lowerbet <= 'z'; lowerbet++)
	{
		putchar(lowerbet);
	}
	for (alphabet = 'A'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
