#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * description: prints _putchar
 *
 * Return: always 0 (success)
 */
int main(void)
{
char ch[8] = "_putchar";
int i;
for(i=0; i < 8; i++)
{
_putchar(ch[i]);
putchar("\n");
}
return 0;
}
