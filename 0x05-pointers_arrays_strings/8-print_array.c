#include "main.h"
#include <stdio.h>
/**
  * print_array - prints the n number of int in an array
  * @a: the array to be used
  * @n: the number of the integers to be printed
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
