#include "main.h"
/**
* _islower - A program thar verify alphabet
* @c: is char to be checked
* Return: 1 if is lower and then 1 if is not lower
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
