#include "main.h"
/**
  * swap_int - A func that swaps the alue of two ints
  *@a: parameter to swapped
  *@b: parameter  to be swapped
  */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
