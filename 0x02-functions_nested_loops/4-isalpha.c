#include "main.h"
/**
* _isalpha - Program that verify alphabet
* @c: is char to be checked
* Return: 1 if is alphabet otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
