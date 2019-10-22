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
dog_t *newdog =  malloc(sizeof(dog_t));
int i, j, y;

if (newdog == NULL)
return (NULL);

for (i = 0; name[i]; i++)
;
for (j = 0; owner[j]; j++)
;
newdog->name = malloc((i + 1) * sizeof(char));
if (new_dog == NULL)
{
free(new_dog);
return (NULL);
}
newdog->owner = malloc((j + 1) * sizeof(char));
if (newdog == NULL)
{
free(newdog->name);
free(newdog);
return (NULL);
}

for (y = 0; y <= i; y++)
newdog->name[y] = name[y];
newdog->age = age;
for (y = 0; y <= j; y++)
newdog->owner[y] = owner[y];
return (newdog);
}
