#include <stdio.h>
/**
 * main - A program thar print alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char character;

	for (character = 'z'; character >= 'a'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
