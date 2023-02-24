#include "main.h"

/**
 * _isupper - check if its upper case
 * @c: function parameter
 * Return: return 1 for upper and 0 for any else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
