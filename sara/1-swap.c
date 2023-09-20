#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: inr parameter
 * @b: inr parameter
 *
 * Return: Nothing
 **/

void swap_int(int *a, int *b)
{
	int tmb;

	tmb = *a;
	*a = *b;
	*b = tmb;
}
