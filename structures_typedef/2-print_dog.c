#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function to print structure dog
 * Return: void
 * @d: structure
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
