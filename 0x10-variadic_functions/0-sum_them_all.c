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
	unsigned int i = 0, sum = 0;

	if (!n)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
