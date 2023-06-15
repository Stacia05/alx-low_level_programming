#include "main.h"

/**
* _strpbrk - the entry point
* @s: input value
* @accept: input
* Return: 0 always for success
*/

char *_strpbrk(char *s, char *accept)
{
int x;
while (*s)
{
for (x = 0; accept[x]; x++)
{
if (*s == accept[x])
return (s);
}
s++;
}
return ('\0');
}
