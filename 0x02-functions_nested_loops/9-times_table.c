#include "main.h"
/**
* times_table - prints the time-table
* Return: void
*/

void times_table(void)
{
	int n, m, z;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			z = n * m;
			if (z < 10)
				_putchar(z + '0');
			else
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
