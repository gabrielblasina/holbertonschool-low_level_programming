#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - entry point
 * Return: NULL (str is NULL) p2str (success)
 * @str: string
*/
char *_strdup(char *str)
{
	int i;
	int x;
	char *p2str;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		;
	p2str = malloc((i * sizeof(char)) + 1);
	if (p2str == NULL)
		return (NULL);
	for (x = 0 ; str[x] != '\0' ; x++)
	{
		if (x < i)
		{
			p2str[x] = str[x];
		}
	}
	return (p2str);
}
/**
 * new_dog - copy a structure to other
 * Return: NULL (if fails) pointer (if success)
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog's owner
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p2newdog;

	if (name && owner)
	{
		p2newdog = malloc(sizeof(dog_t));
		if (!p2newdog)
			return (NULL);
		p2newdog->name = _strdup(name);
		if (!p2newdog)
		{
			free(p2newdog);
			return (NULL);
		}
		p2newdog->owner = _strdup(owner);
		if (!p2newdog)
		{
			free(p2newdog->name);
			free(p2newdog);
			return (NULL);
		}
		p2newdog->age = age;
	}
	return (p2newdog);
}
