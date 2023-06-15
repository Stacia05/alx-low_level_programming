#include "main.h"

/**
* malloc_checked - terminates process with a status value of 98
*
* @b: allocated memory
*
* Return: a pointer to the memory allocated
*/

void *malloc_checked(unsigned int b)
{
void *t;
t = malloc(b);
if (t == NULL)
exit(98);
return (t);
}
