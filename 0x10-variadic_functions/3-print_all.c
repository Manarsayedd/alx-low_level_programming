#include "variadic_functions.h"
/**
 * print_all - function to print charachters wewewe
 * @format: first input
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *space = "", *str;

	va_start(args, format);

	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", space, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", space, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", space, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", space, str);
					break;
				default:
					i++;
					continue;
			}
			i++;
			space = ", ";
		}
		printf("\n");
		va_end(args);
	}
	else
	{
		printf("\n");
	}
}





