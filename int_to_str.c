#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * i_to_str - converts integer to string.
 * @num: number to be converted.
 * Return: returns the string.
 */
char *i_to_str(int num, int base)
{
	int i = 0, j, rem = 0, rev = 0, length = 0, sign = 1, temp = 0;
	char *result;

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
		num = -num;
		length++;
	}

	result = malloc(sizeof(char) * (length + 1));

	while (num > 0)
	{
		rem = num % base;
		num = num / base;
		rev = rev * base + rem;
		if (rem > 9 && rem < 16)
                {
                        result[i++] = rem - 10 + 'A';
                }
                else
                {
                        result[i++] = rem + '0';
                }

		length++;
	}

	if (sign == -1)
	{
		result[i++] = '-';
	}

	result[i] = '\0';

	for (i = 0, j = strlen_1(result) - 1; i < j; i++, j--)
	{
		temp = result[i];
		result[i] = result[j];
		result[j] = temp;
	}
	return (result);
}
