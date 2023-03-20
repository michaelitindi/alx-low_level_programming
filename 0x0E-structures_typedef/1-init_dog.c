
#include "dog.h"
/**
 * init_dog - initializes dog
 * @d: struct
 * @name: member
 * @age: member
 * @owner: member
 * Return: void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
