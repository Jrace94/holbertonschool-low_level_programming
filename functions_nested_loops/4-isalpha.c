#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - Return 0 or 1
 * @c: The number to be checked
 *
 * Return: 0 or 1 (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
