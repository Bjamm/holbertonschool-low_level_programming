#include <stdio.h>
/**
 * main - print 3 digits separated by , and space
 *
 * Return: (0)
 *
 */
int main(void)
{
	int i = '0';
	int j;
	int k;

	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != '7')
					{
					putchar(',');
					putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}

