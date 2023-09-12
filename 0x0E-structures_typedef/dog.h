#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct of a dog
 * @name: dog's name
 * @age: dpg's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);
#endif

