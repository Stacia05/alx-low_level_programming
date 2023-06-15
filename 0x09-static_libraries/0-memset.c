#include "main.h"

/**
* _memset - fills a block of memory with a particular value
* @s: starting address of the memory to be filled
* @b: shows the value desired 
* @n: total number of bytes to be changed
*
* Return: change array with the new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
