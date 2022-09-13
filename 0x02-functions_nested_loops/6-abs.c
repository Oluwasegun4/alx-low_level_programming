#include "main.h"
/**
* _abs - computes the absolute value of an integer
* @int: parameter integer
* Return: Always 0
*/

int _abs(int)
{
	int x;

	if (x >= 0)
		_putchar(x);
	else
	{
		x *= -1;
		_putchar(x);
	}
	return (0);
}
