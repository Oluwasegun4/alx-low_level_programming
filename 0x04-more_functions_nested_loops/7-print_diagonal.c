#include "main.h"

/**
* print_diagonal - print a diagonal on the terminal using the \ character
* @n: number of _ to be printed
* Return:void
*/
void print_diagonal(int n)
{
	int a;
	int b;

	a = 0;
	while (a < n && n > 0)
	{
		b = 0;
		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
