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
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

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
					if (a[j] == *(q + i - 1))
					{
						*(q + i) = *(q + i) - 32;
					}
				}
			}
		}
	i++;
	}
	return (q);
}
