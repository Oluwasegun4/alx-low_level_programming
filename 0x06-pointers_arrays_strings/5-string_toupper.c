#include "main.h"
/**
  * string_toupper - change all lowercase to upper
  * @s: string to be manipulated
  * return: char
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
