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
struct dog *new_dog;
int i, j, y;
new_dog = malloc(sizeof(struct dog));
if (new_dog == NULL)
return (NULL);
for (i = 0; name[i]; i++)
;
for (y = 0; y <= i; y++)
new_dog->name[y] = name[y];
new_dog->age = age;
for (j = 0; owner[j]; j++)
;
for (y = 0; y <= j; y++)
new_dog->owner[y] = owner[y];
return (new_dog);
}
