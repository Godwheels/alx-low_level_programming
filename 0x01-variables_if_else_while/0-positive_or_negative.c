#include <stdlib.h>
#include <time.h>


/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - the entry
 *
 * Return: return 0 after succes
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d n is positive", n);
	else if (n == 0)
		printf("%d n is zero", n);
	else
		printf("%d n is negative", n);
	printf("\n");
	return (0);
}
