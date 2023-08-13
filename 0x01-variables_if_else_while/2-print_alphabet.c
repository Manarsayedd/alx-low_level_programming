#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: outsput all the alphabet letters in lowercase
 *
 * return : always 0 (success)
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}


