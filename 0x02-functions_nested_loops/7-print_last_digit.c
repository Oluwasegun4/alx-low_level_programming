#include "main.h"
/**
* print_last_digit - Prints the last digit
* @n: the parameter used in the function
* Return: 0
*/

int print_last_digit(int n)
{
	int y;

	y = n % 10;
	if (n < 0)
	{
		y *= -1;
		_putchar(y + '0');
		return (y);
	}
	else
	{
		_putchar(y + '0');
		return (y);
	}
}
