#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1 = malloc(sizeof(dog_t));

	dog1->name = malloc(strlen(name) + 1);
	dog1->owner = malloc(strlen(name) + 1);
	if (dog1->name == NULL || dog1->owner == NULL || dog1 == NULL)
	{
		free(dog1->name);
		free(dog1->owner);
		free(dog1);
		return(NULL);
	}
	strcpy(dog1->name, name);
	strcpy(dog1->owner, owner);
	dog1->age = age;
	return (dog1);
}
