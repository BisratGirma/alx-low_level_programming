#include "function_pointers.h" 
/**
 * print_name - points to the function that print a name.
 * @name: the name to be printed.
 * @f: a pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
