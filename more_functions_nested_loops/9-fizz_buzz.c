#include "main.h"
#include <stdio.h>
/**
 * main - Print FizzBuzz
 *
 *
 * Return: success
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");

		else if (i % 5 == 0)
			printf("Buzz");
		if (i == 100)
			printf("\n");
		else
			printf(" ", i);
	}
	return (0);
}
