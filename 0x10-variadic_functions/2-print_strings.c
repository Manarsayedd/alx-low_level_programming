#include "variadic_functions.h"
/**
* print_strings - function prints words
* @separator: first input
* @n: second input
*/
void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (!n)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			char *str = var_arg(args, char *);

			if (str != NULL)
				printf("%s", str);

			else if (str == NULL)
				printf("(nil)");
		}
	}
	else if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			char *str = va_arg(args, char *);

			if (str != NULL)
				printf("%s", str);

			else if (str == NULL)
				printf("(nil)");
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
