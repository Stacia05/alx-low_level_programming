#include "function_pointers.h"

/**
* int_index - returns index place if the comparison equals true, else (-1)
* @array: the array
* @size: the size of elements in the array
* @cmp: pointer to the function of one of the three in main
* Return: zero
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
