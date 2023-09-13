#include "main.h"
#ifndef "MAIN.H"
/**
 * main - Entry point to start.
 * Description: that prints _putchar, followed by a new line.
 * Return : Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	_putchar (str[ch]);
	 _putchar('\n');

	return (0);
}
