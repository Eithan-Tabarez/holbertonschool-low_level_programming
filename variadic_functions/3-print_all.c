#include "variadic_functions.h"
/**
 * print_all - prints format output based on a format string and arguments.
 * args: A va_list object to hold variable arguments.
 * c, i, f: Temporary variables to store arguments.
 * s: A pointer to store string arguments.
 *
 */

void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *s;
    char c;
	float f;

    va_start(args, format);
	(void) f;

    while (format && format[i])
    {
        if (format[i] == 'c')
        {
            c = va_arg(args, int);
            printf("%c", c);
        }
        else if (format[i] == 'i')
        {
            printf("%d", va_arg(args, int));
        }
        else if (format[i] == 'f')
        {
            printf("%f", va_arg(args, double));
        }
        else if (format[i] == 's')
        {
            s = va_arg(args, char *);
            if (s == NULL)
                printf("(nil)");
            else
                printf("%s", s);
        }

        if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') && format[i + 1] != '\0')
            printf(", ");

        i++;
    }

    va_end(args);

    printf("\n");
}