#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - print names using pointer to a function
* @name: the string to be added
* @f: the pointer to a function
* Return: nil
**/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
