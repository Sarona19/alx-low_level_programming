#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char:%lu byte(s)/n", unsigned long char (a));
	printf("Size of a int:%lu byte(s)/n", unsigned long int (b));
	printf("Size of a char:%lu byte(s)/n", unsigned long long int (c));
	printf("Size of a char:%lu byte(s)/n", unsigned long long long int (d));
	printf("Size of a char:%lu byte(s)/n", unsigned long float (f));
	return (0);
}
