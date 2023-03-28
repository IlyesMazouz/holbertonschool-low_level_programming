#include "function_pointers.h"

/**
*print_name - calling functions to print a name
*@name: a pointer
*@f: a function
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
