0x12-singly_linked_lists


0. Write a function that prints all the elements of a list_t list.
	i. Prototype: size_t print_list(const list_t *h);
	ii. Return: the number of nodes
	iii. If str is NULL, print [0] (nil)


1. Write a function that returns the number of elements in a linked list_t list.

	i. Prototype: size_t list_len(const list_t *h);


2. Write a function that adds a new node at the beginning of a list_t list.

	i. Prototype: list_t *add_node(list_t **head, const char *str);

	ii. Return: the address of the new element, or NULL if it failed

	iii. str needs to be duplicated

	iv. You are allowed to use strdup


3. Write a function that adds a new node at the end of a list_t list.

	i. Prototype: list_t *add_node_end(list_t **head, const char *str);

	ii. Return: the address of the new element, or NULL if it failed

	iii. str needs to be duplicated

	iv. You are allowed to use strdup


4. Write a function that frees a list_t list.

	i. Prototype: void free_list(list_t *head);


5. Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

	i. You are allowed to use the printf function


6. Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

	i. You are only allowed to use the printf function

	ii. You are not allowed to use interrupts

	iii. Your program will be compiled using nasm and gcc:
