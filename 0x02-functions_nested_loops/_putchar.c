#include "main.h"
#include <unistd.h>
/**
  _putchar - writes the character
Return: 1 on sucesss
*/
int _putchar(char c)
{
	return (write(1, &c , 1));
}
