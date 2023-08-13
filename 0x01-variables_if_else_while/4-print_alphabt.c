#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: outsput all the alphaabet letters except e and q in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'e' || i == 'q')
{
continue;
}
else
{
putchar(i);
}
}
putchar('\n');
return (0);
}
