#include <stdio.h>
/**
 * main - A program that print alphabet is lower case except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		if (character != 'e' && character != 'q')
		{
			putchar(character);
		}
	}
	putchar('\n');
	return (0);
}
