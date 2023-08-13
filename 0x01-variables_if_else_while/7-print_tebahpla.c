#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: always 0 (success)
 */
int main(void)
{
char s;
for (s = 'z'; s >= 'a'; s--)
{
putchar(s);
}
putchar('\n');
return (0);
}
