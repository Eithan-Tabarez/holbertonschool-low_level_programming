#include "variadic_functions.h"

void print_char(va_list arg)
{
    char letter = va_arg(arg, int);
    printf("%c", letter);
}

void print_int(va_list arg)
{
    int num = va_arg(arg, int);
    printf("%d", num);
}

void print_float(va_list arg)
{
    double num = va_arg(arg, double);
    printf("%f", num);
}

void print_string(va_list arg)
{
    char *str = va_arg(arg, char *);

    if (str == NULL)
    {
        printf("(nil)");
    }
    else
    {
        printf("%s", str);
    }
}

void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);
    char *separator = "";

    while (*format)
    {
        switch (*format)
	{
            case 'c':
                printf("%s", separator);
                print_char(args);
                separator = ", ";
                break;
            case 'i':
                printf("%s", separator);
                print_int(args);
                separator = ", ";
                break;
            case 'f':
                printf("%s", separator);
                print_float(args);
                separator = ", ";
                break;
            case 's':
                printf("%s", separator);
                print_string(args);
                separator = ", ";
                break;
        }
        format++;
    }
	
    va_end(args);
    printf("\n");
}
