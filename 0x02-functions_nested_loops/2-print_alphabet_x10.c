#include "main.h"

/**
 * print_alphaber_x10 - function that will print alphabet 10 times
 */

void print_alphabet_x10(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 'a'; j < 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
