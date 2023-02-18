#include <stdio.h>

/**
 * main - the main entry
 *
 * Return: always return 0 after sucess
 */

int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
