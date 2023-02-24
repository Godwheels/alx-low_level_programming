#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @c: function parameter
 * Return: return 1 for a character and 0 for otherwise
 */

int _isdigit(int c)
{
	if (c  >= 45 && c <= 57)
	{
		return (1);
	}
	return (0);
}
