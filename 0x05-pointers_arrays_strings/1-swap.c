#include <stdio.h>
#include "main.h"
/**
 * swap_int - used to swap to integers
 *
 * description: function used to swap to numbers
 * @a: first input to the function
 * @b: seconf input to the function
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
