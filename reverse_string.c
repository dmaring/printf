#include "holberton.h"

/**
 * reverse_str - reverse a string in place
 * @str: pointer to string
 * @length: length of string
 *
 * Return: void
 */
void reverse_str(char *str, int length)
{
	int temp = 0;
	int i = 0;
	int j = 0;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
