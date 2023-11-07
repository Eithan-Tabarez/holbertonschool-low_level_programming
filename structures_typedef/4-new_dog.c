#include "dog.h"
#include <stdlib.h>
#include <string.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - find length of a sttring
 * @str: the string to be measuring
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}

/**
 * _strcopy - copy a string
 * @dest: buffer storing the string
 * @src: source string
 *
 * Return: pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new sruct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	poppy = malloc(sizeof(dog_t));

	if (poppy == NULL)
		return (NULL);

	poppy->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (poppy->name == NULL)
	{
		free(poppy);
		return (NULL);
	}

	poppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (poppy->owner == NULL)
	{
		free(poppy->name);
		free(poppy);
		return (NULL);
	}

	poppy->name = _strcopy(poppy->name, name);
	poppy->age = age;
	poppy->owner = _strcopy(poppy->owner, owner);

	return (poppy);
}
