#include "main.h"
/**
  * _strlen - prints the length of a string
  * @s: parameter of a string
  * Return: 0 on Success
  */

int _strlen(char *s)
{
	int i, leng = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		leng++;
	}

	return (leng);
}
