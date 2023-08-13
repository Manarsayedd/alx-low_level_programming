#include <stdio.h>

/**
 * main - Entry point
 *
 * description: output numbers of base 10 from 0
 *
 * Return: always 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
}
putchar('\n');
return (0);
}
