#include <stdio.h>

/**
 * main - the main entry
 * description - code for alphabet in lower and uppercase
 * Return: always return 0
 */

int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x);
	for (x = 'A' ; x <= 'Z' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
