#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters except q and e
 *
 * Return: always 0 (Success)
 **/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch == 'e' || ch == 'q')
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
