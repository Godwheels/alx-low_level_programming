#include <stdio.h>

/**
 * main - this is the main entry
 * description - alphabet in reverse
 * Return: return 0 after sucess
 */

int main(void)
{
	char x;

	for (x = 'z' ; x >= 'a' ; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
