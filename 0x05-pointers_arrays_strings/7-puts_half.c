#include "main.h"

/**
 * puts_half - function that print the second half of the string
 *
 * Description: if odd  print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: input
 *
 **/

void puts_half(char *str)
{
	int a, n, longi;
	longi = 0;

	for (a = 0; str[a] != '\n'; a++)
		longi++;
	n = (longi / 2);
	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);
	for (a = n; str[a] != '\n'; a++)
		putchar(str[a]);
	putchar('\n');
}
