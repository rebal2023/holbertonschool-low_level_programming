#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* _strlen - fucntion that returns length of a string
* @s: string
* Return: length
*/
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;
return (i);
}
/**
* *_strcpy - fucntion that copies string pointed to by src to dest
* @dest: pointer
* @src: string
* Return: pointer
*/
char *_strcpy(char *dest, char *src)
{
int len, i;

len = _strlen(src);

for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
/**
* new_dog - function that creates a new dog
* @name: char
* @age: float
* @owner: char
* Return: pointer or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;

len1 = _strlen(name);
len2 = _strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
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
