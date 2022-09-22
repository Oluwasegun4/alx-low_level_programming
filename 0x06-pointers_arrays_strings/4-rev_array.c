#include "main.h"
/**
  * reverse_array - reverse an array
  * @a: array to be reversed
  * @n: number of elements in the array
  */

void reverse_array(int *a, int n)
{
	int i, j, tmp1;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp1 = a[i];
		a[i] = a[j];
		a[j] = tmp1;
		j--;
	}
}
