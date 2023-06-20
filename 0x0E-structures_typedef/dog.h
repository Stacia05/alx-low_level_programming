#ifndef DOG_H
#define DOG_H

/**
* struct dog - dog's basic information
* @name: the first member
* @age:  the second member
* @owner: the third member
*
* poppy - typedef for struct dog
*/

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog poppy;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

poppy
*new_dog(char *name, float age, char *owner);
void free_dog(poppy *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
