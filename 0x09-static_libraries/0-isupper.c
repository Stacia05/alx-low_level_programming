#include "main.h"

/**
 * _isupper - a function that checks uppercase letters 
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (0);
else
return (1);
}
