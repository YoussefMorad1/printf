#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * printstr - hi
 * @s: hi
 * Return: hi
 */
int printstr(char *s)
{
	int i = 0;
	char *p;

	if (!s)
	{
		p = "(null)\0";
	}
	else
		p = s;
	while (p[i])
	{
		write(1, &p[i], 1);
		i++;
	}
	return (i);
}
