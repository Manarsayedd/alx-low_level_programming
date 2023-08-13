#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: outsput all the alphabet letters in uppercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
char i;
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
