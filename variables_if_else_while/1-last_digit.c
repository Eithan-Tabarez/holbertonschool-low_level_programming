#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if((n%10) >5)
	{
		printf("Last digit of\5"\n);
	}
	return (0);
}
