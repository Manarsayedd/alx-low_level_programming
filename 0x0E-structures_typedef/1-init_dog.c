#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function to enter the struct details
 * @d: first input
 * @name: second input
 * @age: third input
 * @owner: fourth input
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	*d.name = name;
	*d.age = age;
	*d.owner = owner;
}
