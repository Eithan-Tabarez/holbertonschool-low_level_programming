#include "variadic_functions.h"
/**
 * print_all - prints format output based on a format string and arguments.
 * args: A va_list object to hold variable arguments.
 * c, i, f: Temporary variables to store arguments.
 * s: A pointer to store string arguments.
 *
 * main - defines sample variables and calls print_all with a format string.
 */

void print_all(const char *format, ...)
{
	va_list args;
	const char *ptr;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		c = *ptr;
		switch (c)
		{
			case 'c':
				i = va_arg(args, int);
				printf("%c", i);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
	}

	va_end(args);
	printf("\n");
}

int main(void)
{
	char c = 'A';
	int i = 123;
	float f = 3.14;
	char *s = NULL;

	print_all("cifs", c, i, f, s);

	return (0);
}
