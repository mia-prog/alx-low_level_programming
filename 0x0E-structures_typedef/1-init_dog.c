#include "dog.h"
/**
 * init_dog : initialize a variable of type struct dog
 * @d : new instance of type dog
 * @name : name of dog
 * @age : the age of dog
 * @owner : the name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
