#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* init_dog - create a dog structure
* @d: name of struct
* @name: name of dog
* @age: age of dog
* @owner: ownder of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
;
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
