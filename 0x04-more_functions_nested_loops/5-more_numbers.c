#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14, ten times, followed by a new line
  * Return: 0
 */
void print_most_numbers(void)
{
	char p = 0;
	int i = 0;

	while (i < 10 )
	{
		char p = 0;

		while (p <= 14)
		{
			{
				_putchar('0' + p);
			}
			p++;
		}
	_putchar('\n');	
	}
	_putchar('\n');
}
