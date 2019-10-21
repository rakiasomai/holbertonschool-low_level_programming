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
struct dog *d;
int y, z, x;
char *m, *p;
d = malloc(sizeof(struct dog));
if (d == NULL)
return (NULL);
for (y = 0; name[y] != '\0'; y++)
;
for (z = 0; owner[z] != '\0'; z++)
;
m = malloc(sizeof(char) * y + 1);
if (m == NULL)
{
free(d);
return (NULL);
}
p = malloc(sizeof(char) * z + 1);
if (p == NULL)
{
free(m);
free(d);
return (NULL);
}
for (x = 0; x <= y; x++)
n[x] = name[x];
for (x = 0; x <= z; x++)
p[x] = owner[x];
d->name = m;
d->age = age;
d->owner = p;
return (d);
}
