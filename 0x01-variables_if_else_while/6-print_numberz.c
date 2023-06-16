#include <stdio.h>
/**
 * main - A program that prints numbers
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		puchar(n + '0');
	}
	putchar('\n');
	return (0);
}
