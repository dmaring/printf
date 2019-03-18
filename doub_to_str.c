#include "holberton.h"

char * d_to_str(double num)
{
	int i;
	float f;
	double dec;
	char *str1, *str2, *result;


	i = num;
	str1 = i_to_str((int)f, 10);
	dec = f - (int)f;

	i = (int)dec * 10000;
	str2 = i_to_str(i, 10);

	result = strcat_1(str1, ".");

	return (strcat_1(result, str2));

}
