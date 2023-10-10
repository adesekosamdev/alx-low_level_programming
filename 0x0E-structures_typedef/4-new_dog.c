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
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	struct dog *dog;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) *  (_strlen_recursion(name) + 1));
	if (dog->name == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[i] = '\0';
	dog->age = age;
	dog->owner = malloc(sizeof(char) *  (_strlen_recursion(owner) + 1));
	if (dog->owner == NULL)
		return (NULL);
	for (i = 0; owner[i] != '\0'; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->owner[i] = '\0';

	return (dog);
}
