#include "main.h"
/**
 * print_last_digit - function to get the last digit from a number
 *
 * @n: to describe the input of the function
 *
 * description: function gets the last digit of a number
 *
 * Return: always 0 (success)
 */
int print_last_digit(int n)
{
int digit;
if(n < 0)
{
digit = -1 * (n % 10);
}
else
{
digit = n % 10;
}
_putchar(digit + '0');
return (digit);
}
