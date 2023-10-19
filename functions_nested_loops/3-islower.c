#include <stdio.h>
#include <ctype.h>

/**
 * _islower - Return 0 or 1
 * @c: The number to be checked
 *
 * Return: 0 or 1 (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
