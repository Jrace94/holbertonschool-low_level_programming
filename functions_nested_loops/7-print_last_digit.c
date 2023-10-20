#include "main.h"

/**
 * print_last_digit - Return an int
 * @x: The number to be checked
 *
 * Return: Return an int (Success)
 */
int print_last_digit(int x)
{
	int last_digit = x % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
