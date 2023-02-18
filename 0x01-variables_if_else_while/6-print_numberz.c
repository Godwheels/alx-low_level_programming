#include <stdio.h>

/**
 * main - the main entry
 * description - character conversion
 * Return: return 0 after sucess
 */

int main(void)
{
	int y;

	for (y = 0 ; y < 10 ; y++)
		putchar(y + '0');
	putchar('\n');
	return (0);
}
