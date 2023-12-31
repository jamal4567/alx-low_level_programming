#ifndef dog_h
#define dog_h
/**
 *struct dog - dog informations
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *dog_t - New name
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
