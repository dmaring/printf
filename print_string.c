#include "holberton.h"
#include <unistd.h>

int print_string(char *s)
{
	int i = 0;

	while (s && s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}
