#include "main.h"

int _strlen(char *s)
{
	int cnt;

	for (cnt = 0; *s != '\0'; s++)
		cnt++;

	return (cnt);
}
