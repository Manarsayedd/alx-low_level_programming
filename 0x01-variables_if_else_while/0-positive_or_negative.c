#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: positive or negative
 *
 * Return : 0 success
 */
int main(void) {
int n;
/* Seed the random number generator. */
srand(time(NULL));
/* Generate a random number. */
n = rand() - RAND_MAX / 2;
/* Check if the number is positive, negative, or zero. */
if (n > 0)
{
printf("%i is positive\n", n);
} 
else if (n == 0)
{
printf("%i is zero\n", n);
}
else
{
printf("%i is negative\n", n);
}
return (0);
}
