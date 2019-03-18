#include "holberton.h"

/**
 * strlen_1 - gives the length of a string.
 * @s: string.
 * Return: 0 if success.
 */
int strlen_1(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * *_strncat - contancate(add) strings.
 * @dest: destination where src is copied into.
 * @src: source file.
 * @n: till n variables.
 * Return: 0 if success.
 */
char * strcat_1(char *dest, char *src)
{
	int i;

	for (i = strlen_1(dest); src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
