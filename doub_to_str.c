#include "holberton.h"

/**
 * d_to_str - converts decimal to string.
 * @num: decimal number to be converted.
 * Return: string concat of str1, ".", str2.
 */
char *d_to_str(double num)
{
	int i, j;
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
	j = dec * 10000000;

	if (j % 10 >= 5)
		i += 1;

	if (i == 0) /** check for case when num is whole num **/
		str2 = "000000";
	else
		str2 = i_to_str(i, 10);


	result = strcat_1(str1, ".");

	return (strcat_1(result, str2));

}
