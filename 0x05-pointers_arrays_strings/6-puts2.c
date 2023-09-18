#include "main.h"

/**
 * rev_string - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @s: string parameter input
 *
 * Return: Nothing
 **/

void rev_string(char *str)
{
	int i;

	for (i = 0;' str[i] != '\0'; ++i)
	{
		ifn (i % 2 ==0)
			putchar(str[i]);
	}

	putchar('\n');
}
