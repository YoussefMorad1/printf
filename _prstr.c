#include "main.h"
#include <unistd.h>
/**
 * printstr - hi
 * @s: hi
 * Return: hi
 */
int printstr(char *s)
{
	int i = 0;

	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return i;
}
