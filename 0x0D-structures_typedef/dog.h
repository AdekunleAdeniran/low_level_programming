#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - struct for dog info
 * @name: type char
 * @age: float type
 * @owner: char type
 *
 *Description: structure to store dog info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
