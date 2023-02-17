#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - The entry point
  * Return: 0 (success)
  */


int main(void)
{
	int n;
	int m;

	m = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is %i ", n, n % 10);
	if (m > 5)
		printf("and is greater than 5\n");
	if ((m == 0)
		printf("and is 0\n");
	if (m < 6 && (n % 10) != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
