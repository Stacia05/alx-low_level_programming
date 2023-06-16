#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - a function that concatenates two strings
*
* s - pointer to the allocated memory
* @s1:the first input
* @s2: the second input
* Return: concat of s1 and concat of s2, NULL if the function fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int a, b, c, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (a = 0; s1[a] != '\0'; a++)
	;
for (b = 0; s2[b] != '\0'; b++)
	;
if (n > b)
n = b;
c = a + n;
s = malloc(c + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < c; i++)
if (i < a)
s[i] = s1[i];
else
s[i] = s2[i - a];
s[i] = '\0';
return (s);
free(s);
}
