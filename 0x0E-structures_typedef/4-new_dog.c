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
dog_t *new_dog = new_dog = malloc(sizeof(dog_t));
int i, j, y;

if (new_dog == NULL)
return (NULL);

for (i = 0; name[i]; i++)
;
new_dog->name = malloc((i + 1) * sizeof(char));
if (new_dog == NULL)
{
free(new_dog);
return (NULL);
}
for (y = 0; y <= i; y++)
new_dog->name[y] = name[y];



for (j = 0; owner[j]; j++)
;
new_dog->owner = malloc((j + 1) * sizeof(char));
if (new_dog == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
new_dog->age = age;
for (y = 0; y <= j; y++)
new_dog->owner[y] = owner[y];
return (new_dog);
}
