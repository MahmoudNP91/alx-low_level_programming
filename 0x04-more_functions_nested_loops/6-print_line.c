#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
*/
void print_line(int n);
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
