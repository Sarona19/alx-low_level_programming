#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a = 1;
	int b = 4;
	long int c = 4;
	long long int d = 8;
	float f = 4;

	printf("Size of a char:%lu byte(s)/n",unsigned long (a));
	printf("Size of a int:%lu byte(s)/n", unsigned long (b));
	printf("Size of a char:%lu byte(s)/n",unsigned long (c));
	printf("Size of a char:%lu byte(s)/n",unsigned long (d));
	printf("Size of a char:%lu byte(s)/n",unsigned long (f));
	return (0);
}
