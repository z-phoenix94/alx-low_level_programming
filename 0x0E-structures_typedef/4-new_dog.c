#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - Entry point
 *
 * Description: calculates the length of string
 * @s: charcter pointer
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int i, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = n + 1;
	}
	return (n);
}

/**
 * *_strcpy - Entry point
 *
 * Description: copies string pointed by src to buffer dest
 * @dest: buffer to copy src's value
 * @src: string pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * *new_dog - Entry point
 *
 * description: creates new dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner:dog's owner
 *
 * Return: crated new dog struct, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_poppy;

	new_poppy = malloc(sizeof(dog_t));

	if (new_poppy == NULL)
	{
		return (NULL);
	}

	new_poppy->name = malloc(sizeof(new_poppy) * (_strlen(name) + 1));

	if (new_poppy->name == NULL)
	{
		return (NULL);
	}
	new_poppy->owner = malloc(sizeof(new_poppy) * (_strlen(owner) + 1));

	if (new_poppy->owner == NULL)
	{
		return (NULL);
	}

	new_poppy->name = _strcpy(new_poppy->name, name);
	new_poppy->age = age;
	new_poppy->owner = _strcpy(new_poppy->owner, owner);

	return (new_poppy);
}
