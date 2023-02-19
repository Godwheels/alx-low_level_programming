#include <stdio.h>

/**
 * main - this is the main function
 * description - base numbers
 * Return: return 0 after sucess
 */

int main(void)
{
	int x;
	char y;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	for (y = 'a' ; y <= 'f' ; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
