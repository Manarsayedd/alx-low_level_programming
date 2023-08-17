#include "main.h"
/**
 * times_table - get the 9 times table
 *
 * description: gets the 9 times table
 *
 * Return: always 0 (success)
 *
 */
void times_table(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 9; j++)
{
if (j == 9)
{
_putchar((i * j) + '0');
_putchar('$');
}
else
{
_putchar((i * j) + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
}
