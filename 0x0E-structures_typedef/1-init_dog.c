#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes dog struct
 * @d: struct dog initializer variable
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: metadata of dog struct
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
