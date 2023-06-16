#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A program that print the last digite of a random number
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;
	char info[20];

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	strcpy(info, "Last digit of");

	if (last_digit < 6 && last_digit != 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", info, n, last_digit);
	}
	else
	{
		if (last_digit > 5)
		{
			printf("%s %d is %d %s\n", info, n, last_digit, "and is greater than 5");
		}
		else
		{
			printf("%s %d %s %d %s\n", info, n, "is", last_digit, "and is 0");
		}
	}
	return (0);
}
