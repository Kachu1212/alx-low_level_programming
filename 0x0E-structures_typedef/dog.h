#ifndef DOG_H_
#define DOG_H_


/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * Description - Header file that defines a new type struct dog.
 */

/**
 * struct dog - is a structure for a dog
 * @name: is the name element
 * @age: is the age element
 * @owner: is the owner element
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
