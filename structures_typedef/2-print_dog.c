#include "dog.h"
#include <stdio.h>

/**
 * print_dog - uses for printing elements of struct dog
 * *d: struct dog
 * If an element of d is NULL, print (nil) instead of this element.
 * If d is NULL print nothing.

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		if (d->name)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");

		printf("Age: %f\n", d->age);

		printf("Owner: ");
		if (d->name)
			printf("%s\n", d->owner);
		else
			printf("(nil)\n");

	}
}
