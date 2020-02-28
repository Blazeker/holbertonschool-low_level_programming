#include "holberton.h"

/**
 * _atoi - Convert a string to an int
 * @s : char
 * Return: An int
 */

int _atoi(char *s)
{
	int i = 0;
	int res = 0;
	int sign = (-1);
	int bo = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res -= (s[i] - '0');
			bo = 1;
		}
		else if (bo == 1)
		{
			break;
		}
	i++;
	}
	res *= sign;
	return (res);
}
