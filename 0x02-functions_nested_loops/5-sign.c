#include "main.h"

/**
 * print_sign - fumction prints sign of number
 *
 * @n: checks on the input of the function
 * description: function that prints the sign of a number
 *
 * Return: will return 1 if n is between 0 and 47
 *                     0 if n is equal 48
 *                     -1 if n is greater than 48
 */

int print_sign(int n)
{
if (n >= 0 && n <= 47)
{
_putchar(45);
_putchar(49);
return (-1);
}
else if (n == 48)
{
_putchar(48);
return (0);
}
else if (n > 48)
{
_putchar(49);
return (1);
}
}
