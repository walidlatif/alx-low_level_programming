#ifndef dog_h
#define dog_h

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 *struct dog - Short description
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Longer description
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

