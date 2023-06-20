#include <stdio.h>
/*
   main - A program that print _putchar
Return: 0
*/
int main(void)
{
	const char msg [] ="_putchar\n";
	int length = sizeof(msg) - 1;

	for (int i = 0; i < length; i++)
	{
		write (1, &msg[i], 1);
	}
	return (0);
}


