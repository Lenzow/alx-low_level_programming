#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints minimum number of coins
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: always 0 fail otherwise.
 */

int main(int argc, char *argv[])
{
	int n;
	int i;
	int times;
	int coins[] = {25, 10, 5, 2, 1};

	i = 0;
	times = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		n = atoi(argv[1]);
		while (n > 0)
		{
			while (n >= coins[i])
			{
				n -= coins[i];
				times++;
			}
			i++;
		}
		printf("%d\n", times);
	}
	return (0);
}
