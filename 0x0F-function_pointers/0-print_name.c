#include "function_pointers.h"
/**
  * print_name - this function prints a name
  * @name: the name string
  * @f: fuction to be printed
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
