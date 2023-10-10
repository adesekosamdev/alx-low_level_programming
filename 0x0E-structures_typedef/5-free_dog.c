#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
