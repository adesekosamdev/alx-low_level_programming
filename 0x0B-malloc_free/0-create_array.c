#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	str[0] = c;
	return (str);
	free(str);
}
