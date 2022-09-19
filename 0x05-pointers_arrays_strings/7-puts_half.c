#include "main.h"
/**
  * puts_half - prints the second half of a str
  * @str: the parameter to be printed
  */

void puts_half(char *str)
{
	int i, n, leng;

	for (leng = 0; str[leng] != '\0'; leng++)
	{
	}
	n = (leng - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
