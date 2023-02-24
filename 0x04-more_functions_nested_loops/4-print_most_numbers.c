#include "main.h"


/**
 * print_most_numbers - the function to print numbrs except two an fur
 *
 * Return: return 0 up to 9
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
		if (x != 2 && x != 4)
			_putchar(x + '0');
	_putchar('\n');
}
