#include <stdio.h>
/**
 * main - A program that print de alphabet in lowercase
 * Return: 0(Success)
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
