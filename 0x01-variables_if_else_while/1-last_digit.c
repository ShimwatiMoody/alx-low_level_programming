#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return:0 (succcessful)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("The last digit of %d is %d which is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("The last of %d is %d and is less than 6 and is not 0\n", n, m);

	return (0);
}
