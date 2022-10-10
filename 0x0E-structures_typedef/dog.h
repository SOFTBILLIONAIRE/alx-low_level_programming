#ifndef MAIN_H
#define MAIN_H
void init_dog(struct dog *d, char *name, float age, char *owner);
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

#endif
