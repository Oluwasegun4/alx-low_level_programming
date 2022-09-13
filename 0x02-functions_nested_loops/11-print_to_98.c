#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print to number 98
* @n: parameter to start printing from
* return: void
*/

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
		n++;
	}
	while (n >= 98)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
		n--;
	}
	_putchar('\n');
}
