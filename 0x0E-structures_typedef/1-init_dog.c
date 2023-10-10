#include "dog.h"
#include <stdlib.h>

/**
  * _strlen_recursion - returns the length of a string.
  * @s: input char
  * Return: length
  *
  **/

int _strlen_recursion(char *s)
{
	int n;

	n = 1;

	if (*s == '\0')
		return (0);
	s++;
	return (n + _strlen_recursion(s));
}

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i;
	d->name = malloc(_strlen_recursion(name) + 1);
	if (d->name == NULL)
		return;
	for (i = 0; d->name[i] != '\0'; i++)
	{
		d->name[i] = name[i];
	}
	d->name[i] = '\0';
	d->age = age;
	d->owner = malloc(_strlen_recursion(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		return;
	}
	for (i = 0; d->name[i] != '\0'; i++)
	{
		d->owner[i] = owner[i];
	}
	d->owner[i] = '\0';
}
