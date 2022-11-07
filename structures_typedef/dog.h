#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A new type describe a dog
 * @name: the name of a dog
 * @age: the age of a dog
 * @owner: the owner of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t - Typedef for struct dog
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
