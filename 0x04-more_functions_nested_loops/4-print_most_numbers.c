#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Constraints - Do not print 2 and 4, Use _putchar only twice
 * Return: 0
 */
void print_most_numbers(void)
{
	char p = 0;

	while (p <= 9)
	{
		if (p != 2 && p != 4)
		{
			_putchar('0' + p);
		}
		p++;
	}

	_putchar('\n');
}
