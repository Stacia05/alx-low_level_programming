#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - prints a struct dog
* @d: struct dog to print
*/

void init_dog
{
struct dog *d;
char *name;
float age;
char *owner;
}
{
if (d == NULL)
return;
*d = name
if (d.name == NULL)
d.name = "(nil)";
*d = owner
if (d.owner == NULL)
d.owner = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d.name, d.age, d.owner);
}
