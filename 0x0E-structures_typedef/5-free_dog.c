#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog.
 * @d: Pointer to struct dog to free.
 *
 * Description: This function frees the memory allocated for a struct dog,
 * including the dynamically allocated memory for the name and owner fields.
 * If the pointer to the struct dog is NULL, the function does nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

