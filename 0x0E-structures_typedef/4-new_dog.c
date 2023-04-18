#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns length of a string
 * @s: string to evaluate
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * *_strcpy - copies the string pointed to by src including
 * the terminating null byte to the buffer
 * pointed to by dest
 * @dest: pointer to the buffer in which it copies the string
 * @src: string to be coppied
 *
 * Return: Always return the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, x;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	for (x = 0; x < a; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Always point to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int m1, m2;

	m1 = _strlen(name);
	m2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (m1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (m2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
