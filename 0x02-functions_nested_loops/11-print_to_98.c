#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print to number 98
* @n: parameter to start printing from
* return: void
*/

void print_to_98(int n)
{
	for (n = n; n < 98; n++)
	{
		printf("%d, ", n);
		printf("%d\n", 98);
	}
	for (n = n; n > 98; n--)
	{
		printf("%d, ", n);
		printf("%d\n", 98);
	}
}
