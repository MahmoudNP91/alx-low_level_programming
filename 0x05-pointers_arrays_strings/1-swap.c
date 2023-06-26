#include "main.h"

/**
 * swap_int - swaping the values of two integers
 * 		using two inputs
 *
 * @a: input parameter
 * @b: int parameter
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b);
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
