#include "holberton.h"

/**
 * strlen_1 - gets length of the string
 * @s: input string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;
	return (i);
}

void i_to_str(int num, char str[])
{
	int i = 0,temp, rem, j, sign;

	if (sign == -1)
	{
		num = -num;
	}
	while (num > 0)
	{
		rem = num % 10;
		num = num / 10;

		if (rem > 9 && rem < 16)
		{
			str[i++] = rem -10 + 'A';
		}
		else
		{
			str[i++] = rem + '0';
		}
	}

	if (sign == -1)
	{
		str[i++] = '-';
	}
	str[i] = '\0';

	for (i = 0, j = strlen_1(str) - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
