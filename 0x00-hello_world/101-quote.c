#include <stdio.h>
#include <unistd.h>
/**
 * main - C program that prints exactly line.
 *
 * Return: always 1 (success)
 */
int main(void)
{
	char Name[] = "and that piece of art is useful - Dora Korpar, 2015-10-19";

	write("%s\n", Name);
	return (1);
}
