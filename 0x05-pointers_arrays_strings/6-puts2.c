#include "main.h"
/**
 * puts2 - a func that prints every other char of a str
 * @str: parameter rto be printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
