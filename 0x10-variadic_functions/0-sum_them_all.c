#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - it returns the sum of its paramters.
* @n: The total number of parameters that are being passed to the function.
* @... A variable number of parameters for calculating the sum of.
*
* Return: - 0 if n is equal to zero
* Otherwise - sum all parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int a, sum = 0;
va_start(ap, n);
for (a = 0; a < n; a++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
