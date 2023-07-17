#ifndef __DOGH__
#define __DOGH__
/**
 * struct dog - dog struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: structure of dog
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
char *_strdup(char *str);
#endif
