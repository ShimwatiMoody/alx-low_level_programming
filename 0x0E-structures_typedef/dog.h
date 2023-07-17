#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure holding basic information about a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This structure defines the basic information about a dog,
 * including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a dog structure with provided values.
 * @d: Pointer to the dog structure to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the information of a dog structure.
 * @d: Pointer to the dog structure to be printed
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates and returns a new dynamically allocated dog structure.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory occupied by a dog structure.
 * @d: Pointer to the dog structure to be freed
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the destination string
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Returns the length of a string.
 * @s: String
 *
 * Return: Length of the string
 */
int _strlen(char *s);

#endif /* DOG_H */
