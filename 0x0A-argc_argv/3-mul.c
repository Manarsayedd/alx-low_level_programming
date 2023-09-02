#include "main.h"
/**
 * main - entrance point
 * @argc: odhg kldjn dkjb
 * @argv: khdg idhu kdhg
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{

	if (argc < 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[argv[1]] * argv[2]));
		return (0);
	}
}


