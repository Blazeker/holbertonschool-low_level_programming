#include "function_pointers.h"

/**
* int_index - Print the name
* @array : The name
* @size : the pointer
* @cmp : the array
* Description : hace cosas muy buenas
* Return: an int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}

	}
	return (-1);
}
