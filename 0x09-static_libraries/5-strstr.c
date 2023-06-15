#include "main.h"

/**
* _strstr - the entry point
* @haystack: input value
* @needle: input value
* Return: 0 always for success
*/

char *_strstr(char *haystack, char *needle)

{
for (; *haystack != '\0'; haystack++)

{
char *i = haystack;
char *j = needle;

while (*i == *j && *j != '\0')

{
i++;
j++;
}
if (*j == '\0')
return (haystack);
}
return (0);
}
