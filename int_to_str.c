#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * i_to_str - converts integer to string.
 * @num: number to be converted.
 * @base: base binary, hexadecimal.
 * Return: returns the string.
 */
char *i_to_str(int num, int base)
{
	int i = 0, rem = 0, rev = 0, length = 0, sign = 1;
	char *result;
	unsigned int digit;

	if (num == 0)
	{
		result = malloc(sizeof(char) * 2);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	if (num < 0)
	{
		sign = -1;
		digit = -num;
		length++;
	}
	else
		digit = num;
	result = malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);

	while (digit > 0)

	{
		rem = digit % base;
		digit = digit / base;
		rev = rev * base + rem;
		if (rem > 9 && rem < 16)
			result[i++] = rem - 10 + 'A';
		else
			result[i++] = rem + '0';
		length++;
	}
	if (sign == -1)
		result[i++] = '-';
	result[i] = '\0';
	reverse_str(result, length);
	return (result);
}
