#include "main.h"

/**
 * print_alphabet - print alphabet in lower cases
 *
 * Return: return 0 after sucess
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
}
