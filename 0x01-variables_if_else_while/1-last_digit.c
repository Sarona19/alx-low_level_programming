#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: always 0 (success)
 **/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, m);
	else if (m < 6 && m != 0)
		printf("last digit of %i is %i less than 6 and not 0\n", n, m);
	else
		printf("last digit of %i is %i and is 0\n", n, m);
	return (0);
}
