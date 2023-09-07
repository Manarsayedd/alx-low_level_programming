#include "main.h"
/**
 * _isdigit - detect if c is digit or not
 *
 * description: a function used to detect if c is a digit or not
 *
 * @c: input of the function
 *
 * Return: 1 if c is a digit
 *         0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
