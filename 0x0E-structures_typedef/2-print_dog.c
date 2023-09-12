#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the details oif the struct
 * @d: first input
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("my_dog.name = %s\n", d->name ? d->name : "(nil)");
		printf("my_dog.age = %f\n", d->age);
		printf("my_dog.owner = %s\n", d->owner ? d->owner : "(nil)");
	}
}
