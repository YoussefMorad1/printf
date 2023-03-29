#include "main.h"
#include <unistd.h>

void printstr(char *s)
{
	int i = 0;

	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
