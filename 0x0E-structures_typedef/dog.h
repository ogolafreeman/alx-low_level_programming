#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic information
 * @name: 1st Member
 * @age: 2nd Member
 * @owner: 3rd Member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_type - typedef for struct  dog
 */
typedef struct dog dog_type;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
