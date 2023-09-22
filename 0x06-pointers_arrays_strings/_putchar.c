#include <uinstd.h>


/**
 * _putchar - write the character c to stdout 
 * @C: THE CHARACTER TO PRINT
 * 
 * Return: on success 1
 * on error -1 is returned and errno is set apporopriately.
 */

 int _putchar(char c)
{
	return (write(1, &c, 1));
}
