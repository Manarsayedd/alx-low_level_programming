#include "main.h"

/**
 * _islower - function that detect if
 *           the c is lower case
 *
 * description: function to check if 'c' is lowercase or not
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase
 *         otherwise always 0 (Success)
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
