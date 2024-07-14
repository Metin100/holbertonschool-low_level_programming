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
			pritnf("(nil)\n");

		printf("Age: ");
                if (d->age)
                        printf("%f\n",d->age);
                else
                        pritnf("(nil)\n");

		printf("Owner: ");
                if (d->name)
                        printf("%s\n",d->owner);
                else
                        pritnf("(nil)\n");

	}
}
