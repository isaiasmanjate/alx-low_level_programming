#include <stdio.h>
/**
 * main - A program that prints the alphabet in lower case and in upper case
 * Return: 0 (Success)
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	for (character = 'A'; character <= 'Z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}

