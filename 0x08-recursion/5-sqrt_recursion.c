#include "main.h"
/**
  * power - it test for the sqrt of a number
  * @x: the number to get the sqrt of
  * @y: the sqrt
  * Return: 0 on success and -1 on error
  */
int power(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (power(x, y + 1));
}

/**
  * _sqrt_recursion - it returns the square root of a number
  * @n: the variable used
  * Return: -1 if n does not have a natural sqrt
  */

int _sqrt_recursion(int n)
{
	return (power(n, 1));
}
