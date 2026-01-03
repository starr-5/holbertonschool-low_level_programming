#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, name_len = 0, owner_len = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	/* count name length */
	while (name[name_len])
		name_len++;

	/* count owner length */
	while (owner[owner_len])
		owner_len++;

	/* allocate dog */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/* allocate name */
	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	/* allocate owner */
	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	/* copy name */
	for (i = 0; i <= name_len; i++)
		dog->name[i] = name[i];

	/* copy owner */
	for (i = 0; i <= owner_len; i++)
		dog->owner[i] = owner[i];

	dog->age = age;

	return (dog);
}

