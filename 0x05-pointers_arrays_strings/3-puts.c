#include "main.h"

/**
 * _puts - ptints a string, followed by a newline to stdout
 *
 * @str: string parameter to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;

	}
	_putchar('\n');
}
