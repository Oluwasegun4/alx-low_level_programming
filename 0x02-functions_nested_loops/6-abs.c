#include "main.h"
/**
* _abs - computes the absolute value of an integer
* @x: parameter integer
* Return: Always 0
*/

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);

	}
	else
	{
		x *= -1;
		return (x);
	}
}
