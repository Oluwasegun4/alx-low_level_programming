#include <stdio.h>
/**
  * main - prints out the number of arg passed into it
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0
  */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
