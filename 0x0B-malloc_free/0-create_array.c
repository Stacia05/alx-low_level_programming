#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of size size and assign char c
* @size: the size of array
* @c: the char to be assigned
* Description: creates an array of size size and assign char c
* Return: the pointer to array, NULL if failed
*
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int a;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (a = 0; a < size; ++a)
str[a] = c;
return (str);
}
