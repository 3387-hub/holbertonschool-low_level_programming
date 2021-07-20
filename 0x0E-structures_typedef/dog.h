#ifndef DOG
#define DOG
/**
 * struct dog - It's a new type of structure
 *@name: A new type of char.
 *@age: A new type of float.
 *@owner: A new type of pointer char.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
