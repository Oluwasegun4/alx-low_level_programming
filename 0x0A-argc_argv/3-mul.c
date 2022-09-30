#include <stdlib.h>
#include <stdio.h>
/**
  * main - prints the results of mult
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 on success, 1 on error
  */

int main(int argc, char *argv[])
{

	if (argc > 1)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
