#include "main.h"
/**
 * _abs - function to calculate the absolute of a number
 *
 * @n: describes the input of the function
 *
 * description: function that gives the absolute of a number 
 *
 *return: always 0 (success)
 */
int _abs(int n)
{
if (n < 0)
{
n = (-1) * n;
}
return (n);
}
