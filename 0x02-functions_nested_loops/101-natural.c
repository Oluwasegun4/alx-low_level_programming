#include "main.h"
#include <stdio.h>
/**
* main - it prints the sum of natural numbers that are
* multiples of 3 and 5
*
* return: void
*/

int main(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 || n % 5)
			sum += n;
	}
	printf("%d\n", sum);
}
