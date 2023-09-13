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
/**
 * dog_t - function wewewewe
 */
typedef struct dog dog_t ;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d)
#endif

