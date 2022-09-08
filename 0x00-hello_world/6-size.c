#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'it prints the size of various data types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	
	int d;
	
	long int l;
	
	long long int u;
	
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
        printf("Size of a long long int: %llu byte(s)\n", (unsigned long long)sizeof(u));
        printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
        return (0);

}
