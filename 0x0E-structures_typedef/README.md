0x0E. C - Structures, typedef


0. Define a new type struct dog with the following elements:

	i. name, type = char *

	ii. age, type = float

	iii. owner, type = char *


1. Write a function that initialize a variable of type struct dog

	i. Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);


2. Write a function that prints a struct dog

	i. Prototype: void print_dog(struct dog *d);

	ii. Format: see example bellow

	iii. If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))

	iv. If d is NULL print nothing.


3. Define a new type dog_t as a new name for the type struct dog.


4. Write a function that creates a new dog.

	i. Prototype: dog_t *new_dog(char *name, float age, char *owner);

	ii. You have to store a copy of name and owner

	iii. Return NULL if the function fails
