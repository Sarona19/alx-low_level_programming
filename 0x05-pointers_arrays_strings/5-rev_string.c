#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: string parameter input
 *
 * return: Nothing
 **/

void rev_string(char *s)
{
	int l, i;
	char temb;

	for (l = 0; s[l] != '\0'; ++l);

	for (i = 0; i < l / 2; i++)

		temb = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temb;
}
