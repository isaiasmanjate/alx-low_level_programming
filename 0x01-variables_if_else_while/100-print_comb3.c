#include <stdio.h>
/**
 * main - A progam
 * Return: 0
 */
int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 <= 8; d1++)
	{
		for (d2 = 1 + d1; d2 <= 9; d2++)
		{
			putchar(d1 + '0');
			putchar(d2 + '0');
			if (d1 != 8 || d2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
