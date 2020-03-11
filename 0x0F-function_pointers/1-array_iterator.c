#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - Print the name
* @array : The name
* @size : the pointer
* @action : array
* Description: hace cosas muy buenas
* Return : 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
