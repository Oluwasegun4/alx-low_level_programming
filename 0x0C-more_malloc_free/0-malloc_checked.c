#include "main.h"
/**
  * malloc_checked - this allocates a memory using malloc
  * @b: the number of memory to be allocated
  */

void *malloc_checked(unsigned int b)
{
	void *s;

	 s = malloc(b);
	 if (s == NULL)
	 {
		 exit(98);
	 }
	 return (s);
}
