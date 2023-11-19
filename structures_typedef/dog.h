#ifndef header_file
#define header_file
/**
* struct dog - a dog's basic info
* @name: First element
* @age: Second element
* @owner: Third element
* Description: Has 3 elements
*/

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
