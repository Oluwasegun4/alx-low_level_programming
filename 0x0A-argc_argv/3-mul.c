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
	if (argc == 3)
	{
		int i;
		int mul = 1;

		for (i = 1; i < argc; ++i)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
