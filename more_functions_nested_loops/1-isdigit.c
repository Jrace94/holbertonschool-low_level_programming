#include <ctype.h>

/**
 * _isdigit - Return 1 or 0
 * @c: char
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
