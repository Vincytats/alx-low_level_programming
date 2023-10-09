#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes dog structure
 * @d: Dog structure
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d!= NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
