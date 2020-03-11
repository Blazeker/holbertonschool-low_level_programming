#include "function_pointers.h"
/**
* print_name - Print the name
* @name : The name
* @f : the pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
