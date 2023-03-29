#include "main.h"
#include <stdlib.h>
/**
 * printint - hi
 * @x : hi
 * Return: hi
 */
int printint(int x)
{
	char *s;
	int y = x, ln = 0;

	while (y)
	{
		y /= 10;
		ln++;
	}
	s = malloc(ln + 1);
	s[ln] = '\0';
	ln--;
	while (x)
	{
		s[ln] = '0' + x % 10;
		ln--;
		x /= 10;
	}
	return printstr(s);
}
