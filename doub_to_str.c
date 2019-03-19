#include "holberton.h"

/**
 * d_to_str - converts decimal to string.
 * @num: decimal number to be converted.
 * Return: string concat of str1, ".", str2.
 */
char *d_to_str(double num)
{
	int i;
	double dec;
	char *str1, *str2, *result;


	i = (int)num;
	str1 = i_to_str((int)num, 10);
	if (num > 0)
	{
		dec = num - (int)num;
	}
	else
	{
		dec = (int)num - num;
	}

	i = dec * 1000000;
	while(i > 0 && i % 10 == 0)
		i = i/10;
	str2 = i_to_str(i, 10);


	result = strcat_1(str1, ".");

	return (strcat_1(result, str2));

}
