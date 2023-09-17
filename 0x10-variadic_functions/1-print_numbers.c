#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: first input
 * @n: second input
 * Return: 0 (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
		}
	}
	else if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d %s", va_arg(args, int), separator);
		}
	}
	printf("\n");
	va_end(args);
}

