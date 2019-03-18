#include "holberton.h"

char *d_to_str(double num)
{
	int i;
	double dec;
	char *str1, *str2, *result;


	i = num;
	str1 = i_to_str((int)num, 10);
	dec = num - (int)num;

	i = (int)dec * 10000;
	str2 = i_to_str(i, 10);

	result = strcat_1(str1, ".");

	return(strcat_1(result, str2));

}
