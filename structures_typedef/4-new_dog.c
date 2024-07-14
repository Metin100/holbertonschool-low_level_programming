#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int i,lname,lowner;

	p = malloc(sizeof(*p));
	if (!p)
	{
		free(p);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	p->name = malloc(sizeof(lname + 1));
	p->owner = malloc(sizeof(lowner + 1));

	if ((!p->name) || (!p->owner))
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}

	for(i = 0; i < lname; i++)
		p->name[i] = name[i];
	p->name[i] = '\0';

	p->age = age;

	for (i = 0; i < lowner; i++)
		p->owner[i] = owner[i];
	p->owner[i] = '\0';

return (p);	
}
