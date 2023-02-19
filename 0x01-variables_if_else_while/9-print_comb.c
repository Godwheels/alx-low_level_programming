#include <stdio.h>

/**
 * main - the main function
 * description -  still on numbers
 * Return: return 0 after sucss
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
