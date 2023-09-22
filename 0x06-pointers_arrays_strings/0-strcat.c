#include "main.h"

/**
 * *_strcat - function appends to strings
 *
 * @dest: pointer
 * @src: pointer
 *
 * return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;
	for (c2 = 0, src[c2], c2++)
		desr[c++] = src[c2];
	return (dest);
}
