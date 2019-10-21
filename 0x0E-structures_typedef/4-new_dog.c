#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
*new_dog - function that create a new dog
*@name: name of dog
*@age: age of dog
*@owner:owner of dog
*Return: dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *d

new_dog = malloc(sizeof(struct dog));
if (d == NULL)
return (NULL);
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
