#include "main.h"

/**
* _realloc - uses malloc and free to reallocate a memory block
*
* @ptr: pointer to the memory that was allocated previously
* @old_size: is the n byte size of the space allocated for ptr
* @new_size: the new byte size of the newly created memory block
*
* Return: pointer allocate new memory size , or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
char *x;
unsigned int i, n = new_size;
char *oldx = ptr;

if (ptr == NULL)
{
x =  malloc(new_size);
return (x);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
x = malloc(new_size);
if (x == NULL)
return (NULL);
if (new_size > old_size)
n = old_size;
for (a = 0; a < n; ++a)
p[a] = oldp[a];
free(ptr);
return (x);
}
