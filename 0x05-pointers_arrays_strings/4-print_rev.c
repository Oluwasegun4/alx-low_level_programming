#include "main.h"
/**
  * print_rev - prints  a string to stdout in reverse
  * @s: the variable to be printed
  */

void print_rev(char *s)
{
	int i, leng = 0;

	for (leng = 0; s[leng] != '\0'; leng++)
	{
	}

	for (i = leng; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
