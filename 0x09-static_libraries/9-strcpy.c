#include "main.h"

/**
* char *_strcpy - the program copies the string src points to
* @dest: copy to
* @src: copy from
* Return: the value of string
*/

char *_strcpy(char *dest, char *src)
{

int x = 0;
int y = 0;
while (*(src + x) != '\0')
{
x++;
}
for ( ; y < x ; y++)
{
dest[y] = src[y];
}
dest[x] = '\0';
return (dest);
}
