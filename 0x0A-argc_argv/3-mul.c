#include "main.h"
/**
 * _atoi - function kjhjkdb lksjbj
 * @s: first input
 * Return: zeft teen
 */
int _atoi(char *s)
{
	short ngtv = 1;
	unsigned int num = 0, i = 0;
	int finalnum = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			num = (num * 10) + (*(s + i) - 48);
			if (!(*(s + i + 1) >= 48 && *(s + i + 1) <= 57))
				break;
		}
		if (*(s + i) == '-')
		{
			ngtv *= -1;
			i++;
		}
		if (ngtv == -1)
			finalnum = num * ngtv;
		else
			finalnum = num;
		return (finalnum);
	}
}
/**
 * main - entrance point
 * @argc: djh idhil lkdjh
 * @argv: pdkjh lkjd
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int v1, v2;

	v1 = _atoi(argv[1]);
	v2 = _atoi(argv[2]);
	if (argc < 3)
	{
		printf("ERROR \n");
		return (1);
	}
	else
	{
		printf("%d\n", v1 * v2);
		return (0);
	}
}
