#include "main.h"

/**
*_memcpy -  it is a function that copies the memory area
*@dest: the exact memory where it is stored
*@src: the memory where it is copied
*@n: total number of bytes
*
*Return: copied memory with n byte changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
dest[r] = src[r];
n--;
}
return (dest);
}
