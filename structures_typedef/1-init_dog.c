#include "dog.h"
/**
 *init_dog - inicialize struct dog
 *Return: void
 *@d: pointer to struct dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
