#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a user defined data type
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 * Description: A long description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
