#include "main.h"

/**
 * main - print the addition.
 * @argc: number of arguments.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int n1, n2, s;

	s = 0;
	for (n1 = 1; n1 < argc; n1++)
	{
		for (n2 = 0; argv[n1][n2]; n2++)
		{
			if (argv[n1][n2] < '0' || argv[n1][n2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	s += atoi(argv[n1]);
	}
	printf("%d\n", s);
	return (0);
}
