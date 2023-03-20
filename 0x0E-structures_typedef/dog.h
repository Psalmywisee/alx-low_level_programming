#ifndef DOG_H
#define DOG_H
/**
* struct dog - poppy data
* @name: poppy name data
* @age: poppy age data
* @owner: poppy owner data
*/
	struct dog
	{
	char *owner;
	float age;
	char *name;
	};
/**
* dog_t - typedef for struct dog
*/
	typedef struct dog dog_t;
	void init_dog(struct dog *d, char *owner, float age, char *name);	void print_dog(struct dog *d);
	dog_t *new_dog(char *owner, float age, char *name);
	void free_dog(dog_t *d);
	char *_strcpy(char *dest, char *src);
	int _strlen(char *s);
#endif
