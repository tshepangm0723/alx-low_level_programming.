#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  function that prints a struct dog
 * @d: struct of dog
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("name: (nil)\n");
		else
			printf("name: %s\n", d->name);

		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
