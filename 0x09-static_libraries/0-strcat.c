#include "main.h"

/**
*  _strcat - function that concatenates two strings
*  @dest: the value entered 
*  @src: the value entered
*
*  Return: void
*/

char *_strcat(char *dest, char *src)
{
int i;
int j;
a = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
