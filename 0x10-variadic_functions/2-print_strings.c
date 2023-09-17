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
			if (va_arg(args, char) != NULL)
				printf("%s", va_arg(args, char));

			else if (va_arg(args, char) == NULL)
				printf("(nil)");
		}
	}
	else if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (va_arg(args, char) != NULL)
				printf("%s", va_arg(args, char));

			else if (va_arg(args, char) == NULL)
				printf("(nil)");
		}
	}
	printf("\n");
	va_end(args);
}
