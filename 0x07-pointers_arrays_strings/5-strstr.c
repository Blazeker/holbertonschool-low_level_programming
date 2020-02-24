#include "holberton.h"

/**
 * *_strstr - Return an pointer
 *@haystack : an pointer
 *@needle : an character
 *Return: an pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char *p = '\0';

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			p = &(*(haystack + i));
		}
	}
	return (p);
}
