#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees the memories allocated for a struct dog
* @d: the struct to be freed
*/

void free_dog(dog_t *d)
{
if (d)
{
free(d.name);

;
free(d);
}
}
