#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicate to the location of the new memory space
* @str: char
* Return: 0
*/

char *_strdup(char *str)
{
char *aaa;
int a, x = 0;
if (str == NULL)
return (NULL);
a = 0;
while (str[a] != '\0')
a++;
aaa = malloc(sizeof(char) * (a + 1));
if (aaa == NULL)
return (NULL);
for (x = 0; str[x]; x++)
aaa[x] = str[x];
return (aaa);
}
