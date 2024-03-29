#include <stdlib.h>
#include "dog.h"
/**
* _strlen - function to get the length of a string
* @s: string to work on
* Return: the length of string if successful
*/
	int _strlen(char *s)
	{
	int i;
	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
	}
/**
* _strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string to
* @src: string to be copied from
* Return: the pointer to dest if successful
*/
	char *_strcpy(char *dest, char *src)
	{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
	len++;
	}
	for (i = 0; i < len; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
	}
/**
* new_dog - creates a new type dog_t
* @name: name data of the dog
* @age: age data of the dog
* @owner: owner data of the dog
* Return: pointer to the new dog as Success, NULL otherwise
*/
	dog_t *new_dog(char *owner, float age, char *name)
	{
		dog_t *dog;
		int len1, len2;

	len1 = _strlen(owner);
	len2 = _strlen(name);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);
	dog->owner = malloc(sizeof(char) * (len1 + 1));
	if (dog->owner == NULL)
	{
	free(dog);
	return (NULL);
	}
	dog->name = malloc(sizeof(char) * (len2 + 1));
	if (dog->name == NULL)
	{
	free(dog);
	free(dog->name);
	return (NULL);
	}
	_strcpy(dog->owner, owner);
	_strcpy(dog->name, name);
	dog->age = age;
	return (dog);
	}
