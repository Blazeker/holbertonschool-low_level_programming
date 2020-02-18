#include "holberton.h"

char *_strcpy(char *dest, char *src)
{
	int cont = 0;
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		cont++;
	}
	for (i = 0; i < cont && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (;i < cont; i++)
	{
		dest[i] = '\0';
	}
	return dest;
}
