#include <stdio.h>
#include "main.h"
/**
 * main - print numbers from 1 to 100
 * numbers that divisble by 3 print fizz
 * numbers that divisible by 5 print buzz
 * numbers that divisible by 3 and 5 print fizzbuzz
 * each number and word is separated by a space
 */
void main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz");
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("Buzz");
		}
		else if (( i % 3 == 0) && (i % 5 == 0))
		{
			printf("FIzzBuzz");
		}
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("n");
	}
}

