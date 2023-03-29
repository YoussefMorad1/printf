#include "main.h"
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>
/**
 * printint - hi
 * @x : hi
 * Return: hi
 */
int pint(int x)
{
	char *s;
	int y = x, ln = 0, m = 0;

	if (x < 0)
	{
		char c = '-';
		write(1, &c, 1);
		pint(- x);
	}
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
	m = printstr(s);
	free(s);
	return m;
}
