#include "function_pointers.h"

/**
* print_name - Print the name
* @name : The name
* @f : the pointer
* Description: hace cosas muy buenas
* Return : 0
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(f)(name);
}
