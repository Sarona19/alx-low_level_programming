#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: always 0 (Succuss)
 **/

int main(void)
{
	int digital = 0;

	while (digital <= 9)
	{
		printf("%i", digital);
		digital++;
	}
	printf("\n");
	return (0);
}
