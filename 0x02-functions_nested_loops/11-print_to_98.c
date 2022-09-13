#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print to number 98
* @n: parameter to start printing from
* return: void
*/

void print_to_98(int n)
{
	for (n = n; n < 99; n++)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
	}
	for (n = n; n > 97; n--)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
	}
	_putchar('\n');
}
