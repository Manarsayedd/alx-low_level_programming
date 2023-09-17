#iinclude "variadic_functions.h"
/**
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
			printf("%d %s", va_args(args,int), *separator);
		}
	}
	printf("\n");
	va_end(args);
}

