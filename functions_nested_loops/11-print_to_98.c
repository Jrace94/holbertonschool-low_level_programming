#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * print_to_98 - print numbers
 * @n: number
 */
void print_to_98(int n)
{
	bool x = true;

	while (x)
	{
		if (n <= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			printf("%d, ", n);
			n++;
		}
		else
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			printf("%d, ", n);
			n--;
		}
	}
}
