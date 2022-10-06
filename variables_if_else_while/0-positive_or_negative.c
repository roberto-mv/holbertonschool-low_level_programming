#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last == 0)
		printf("%i is zero\n", n);
	if (last > 0)
		printf("%i is positive\n", n);
	if (last < 0)
		printf("%i is negative\n", n);

	return (0);
}
