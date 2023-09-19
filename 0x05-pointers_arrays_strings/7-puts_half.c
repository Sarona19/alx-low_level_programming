#include "main.h"

/**
 * puts_half - print the second half of the string
 *
 * @str: char array string type
 *
 * Description: it odd number of chars, print[length - 1] / 2
 * 
 **/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;
		i++;
	for (i /= 2; str[i] != '\n'; i++)
	{
		putchar(str[i]);

	}
		putchar('\n');
}
