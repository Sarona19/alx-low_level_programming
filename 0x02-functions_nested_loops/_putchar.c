#include <unistd.h>
#include <main.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is reurned. and errno is set appropriatiy.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
