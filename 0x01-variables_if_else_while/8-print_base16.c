#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all numbers with base 16
 *
 * Return: always 0 (success)
 */
int main(void)
{
int i;
char s;
for (i = 0 ; i < 10; i++)
{
putchar((i % 10) + '0');
}
for (s = 'a' ; s <= 'f'; i++)
{
putchar(s);
}
return (0);
}
