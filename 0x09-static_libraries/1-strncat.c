#include "main.h"
/**
  * _strncat - concatenates two strings up umtil n
  * @dest: string to be append
  * @src: string to apend
  * @n: the number of src str to append
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; src[j]; j++)
	{
		if (j < n)
		{
			dest[i] = src[j];
			i++;
		}
	}
	if (n > 0)
		dest[i] = '\0';

	return (dest);
}
