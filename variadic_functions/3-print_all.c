#include "variadic_functions.h"

void print_all(format, va_alist)
	const char *format;
	va_dcl
{
	va_list args;
	va_start(args);

	char c;
	int i;
	float f;
	char *s;

	while ((c = *format++))
	{
		if (c == 'c')
		{
			i = va_arg(args, int);
			printf("%c", i);
		}
	else if (c == 'i')
	{
		i = va_arg(args, int);
		printf("%d", i);
	}
		else if (c == 'f')
		{
			f = (float) va_arg(args, double);
			printf("%f", f);
		}
		else if (c == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
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
