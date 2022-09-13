#include "main.h"
/**
* main - Entry point
* Description: "Print a string in stdout"
* Return: Always 0 (Success)
*/

int main(void)
{
	char c[] = '_putchar';

	for (c = 0; c < 9; c++)
		_putchar(c);
	_putchar('\n');
	return (0);
}
