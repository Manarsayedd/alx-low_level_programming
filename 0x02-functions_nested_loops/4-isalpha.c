#include "main.h"

/**
 *_isalpha - function that detect if
 *               the c is la letter
 *
 * description: function to check if 'c' is a letter or not
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is letter
 *         otherwise always 0 (Success)
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
