#include <stdio.h>
/**
 * main - Entry point
 *
 * description: prints all possible combinations of a unidigited number
 *
 * Return: always 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
if (i == 9)
{
putchar('\n');
break;
}
else
{
putchar(',');
putchar(' ');
}
}
return (0);
}
