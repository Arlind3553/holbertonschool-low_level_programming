#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL && d->owner == NULL)
		{
			d->name = "(nil)"
			d->owner = "(nil)"
		}

		printf("Name: %s", d->name);
		printf("Age: %f", d->age);
		printf("Owner: %s", d->owner);

	}
}
