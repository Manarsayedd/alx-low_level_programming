#include "main.h"
/**
 * _abs - function to calculate the absolute of a number
 *
 * @n: describes the input of the function
 *
 * Description: calculate the absolute of a number
 *
 * Return: always 0 (success)
 */
int _abs(int n)
{
if (n < 0)
{
n = (-1) * n;
}
return (n);
}
