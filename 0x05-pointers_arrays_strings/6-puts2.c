#include "main.h"

/**
 * rev_string - prints character of a string.
 *
 * @str: string parameter input
 *
 * Return: Nothing
 **/

void rev_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)

		putchar(str[i]);
	}

	putchar('\n');
}