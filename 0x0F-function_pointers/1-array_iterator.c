#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - it prints all array elements each on a new line
* @array: the array
* @size: how many elements to be printed
* @action: pointer to print in regular or hex
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
