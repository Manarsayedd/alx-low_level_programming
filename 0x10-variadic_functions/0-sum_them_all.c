#include "variadic_functions.h"
/**
 * sum_them_all - intro to the fuction that will make the sum
 * @n: first input
 * @...: second input
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
