#include "main.h"

/**
* _strchr - the entry point
* @s: input
* @c: input
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)

{
int x = 0;
for (; s[x] >= '\0'; i++)
{
if (s[x] == c)
return (&s[x]);
}
return (0);
}
