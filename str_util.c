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
char * strncat_1(char *dest, char *src, int n)
{
	int i, j;

	for (i = strlen_1(dest), j = 0; j < n && src[j]; i++, j++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
