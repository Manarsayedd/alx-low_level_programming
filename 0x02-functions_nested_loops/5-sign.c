#include "main.h"

/**
 * print_sign - fumction prints sign of number
 *
 * @n: checks on the input of the function
 * description: function that prints the sign of a number
 *
 * Return: will return 1 if +
 *                     0 if n is 0
 *                     -1 if n is less than than 0
 */

int print_sign(int n)
{
if (n < 0)
{
_putchar(45);
return (-1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n > 0)
{
_putchar(43);
return (1);
}
}
