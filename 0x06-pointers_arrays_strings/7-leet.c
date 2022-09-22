#include "main.h"
/**
  * leet - encode your string
  * @s: the string to be encoded
  * Return: char s
  */

char *leet(char *s)
{
	char a[] = {'4', '3', '0', '7', '1'};
	char ll[] = {'a', 'e', 'o', 't', 'l'};
	char up[] =  {'A', 'E', 'O', 'T', 'L'};
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == ll[j] || s[i] == up[j])
			{
				s[i] = a[j];
			}

		}
	}
	return (s);
}
