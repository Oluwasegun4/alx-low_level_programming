#include "main.h"
/**
  * _pow_recursion - it returns the value of x raised
  * to the power of y
  * @x: integer to be raised to the power
  * @y: integer that is the value to be raised to power by
  * Return: -0 if y is less than 0
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
