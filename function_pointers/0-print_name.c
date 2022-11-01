#include "function_pointers.h"
/**
 * print_name - function that callback a function to print a name
 * Return: void
 * @f: function pointer
 * @name: name to print
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
