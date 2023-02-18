#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = i ; j < 10; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + ')');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('n');
	return (0);
}
