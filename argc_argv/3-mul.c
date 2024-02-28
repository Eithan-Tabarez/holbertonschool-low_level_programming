#include "main.h"
/**
 * main - Prints the multiplication of two num.
 * @argc: number of arguments.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 , 1.
 */

int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;

	printf("%d\n", mul);

	return (0);
}
