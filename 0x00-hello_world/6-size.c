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

	printf("Size of a char:%a byte(s)/n", a);
	printf("Size of a int:%b byte(s)/n", b);
	printf("Size of a char:%c byte(s)/n", c);
	printf("Size of a char:%d byte(s)/n", d);
	printf("Size of a char:%f byte(s)/n", f);
	return (0);
}
