#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL value if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j =  0, k = 0;

	struct dog *num_dog = NULL;

	while (name[i] != '\0')
		i++;

	while (owner[k] != '\0')
		k++;

	num_dog = malloc(sizeof(struct dog));
	if (num_dog == NULL)
	{
		free(num_dog);
		return (NULL);
	}
	num_dog->name = malloc(j + 1);
	if (num_dog->name == NULL)
	{
		free(num_dog->name);
		free(num_dog);
		return (NULL);
	}
	num_dog->owner = malloc(k + 1);
	if (num_dog->owner == NULL)
	{
		free(num_dog->name);
		free(num_dog->owner);
		free(num_dog);
		return (NULL);
	}
	for (i = 0; i <= j; i++)
		num_dog->name[i] = name[i];
	for (i = 0; i <= k; i++)
		num_dog->owner[i] = owner[i];
	num_dog->age = age;
	return (num_dog);
}

