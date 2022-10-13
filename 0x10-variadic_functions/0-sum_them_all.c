#include "variadic_functions.h"
/**
  * sum_them_all - a variadic func that sums all its parameters
  * @n: the number of variables to be sumed
  * Return: the sum on success, 0 if n is 0
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
