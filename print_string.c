#include "holberton.h"
#include <unistd.h>

/**
 * print_string - prints string.
 * @s: string to be printed.
 * Return: returns value of the string.
 */
int print_string(char *s)
{
	int i = 0;

	while (s && s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
