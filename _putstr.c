#include "holberton.h"

/**
 * _putstr - function that prints string to std out
 * @s: input string as char pointer
 *
 * Return: integer number of characters printed
 */
int _putstr(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
