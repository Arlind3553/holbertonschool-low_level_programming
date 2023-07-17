#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1 = malloc(sizeof(dog_t));

	if(dog1 == NULL)
		return (NULL);
	dog1->name = malloc(strlen(name));
	dog1->name = malloc(strlen(name));

	strcpy(dog1->name, name);
	strcpy(dog1->owner, owner);
	dog1->age = age;
	return (dog1);
}
