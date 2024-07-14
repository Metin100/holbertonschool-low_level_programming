#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		if (d->name)
			printf("%s\n",d->name);
		else
			printf("(nil)\n");

		printf("Age: %f\n",d->age);

		printf("Owner: ");
                if (d->name)
                        printf("%s\n",d->owner);
                else
                        printf("(nil)\n");

	}
}
