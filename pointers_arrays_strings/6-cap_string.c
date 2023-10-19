#include "main.h"
/**
* cap_string - capitalizes most of the words in a string.
* @q: analized string.
*
* Return: String with all words capitalized.
*/
char *cap_string(char *q)
{
	int i, j;
	int a[] = {32, 10, 38, 33, 145, 72, 497, 7, 13, 69, 15, 432, 10, 38, 33, 145};

	i  = 0;
	while (*(q + i) != '\0')
	{
		if (*(q + i) >= 'a' && *(q + i) <= 'z')
		{
			if (i == 0)
			{
				*(q + i) = *(q + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(q + i))
					{
						*(q + i) = *(q + i) - 32;
					}
				}
			}
		i++;
		}
	}
	return (q);
}
