0x13. C - More singly linked lists



0. Write a function that prints all the elements of a listint_t list.

	i. Prototype: size_t print_listint(const listint_t *h);

	ii. Return: the number of nodes

	iii. You are allowed to use printf


1. Write a function that returns the number of elements in a linked listint_t list.

	i. Prototype: size_t listint_len(const listint_t *h);


2. Write a function that adds a new node at the beginning of a listint_t list.

	i. Prototype: listint_t *add_nodeint(listint_t **head, const int n);

	ii. Return: the address of the new element, or NULL if it failed


3. Write a function that adds a new node at the end of a listint_t list.

	i. Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);

	ii. Return: the address of the new element, or NULL if it failed


4. Write a function that frees a listint_t list.

	i. Prototype: void free_listint(listint_t *head);


5. Write a function that frees a listint_t list.

	i. Prototype: void free_listint2(listint_t **head);

	ii. The function sets the head to NULL


6. Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

	i. Prototype: int pop_listint(listint_t **head);

	ii. if the linked list is empty return 0


7. Write a function that returns the nth node of a listint_t linked list.

	i. Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

	ii. where index is the index of the node, starting at 0

	iii. if the node does not exist, return NULL


8. Write a function that returns the sum of all the data (n) of a listint_t linked list.

	i. Prototype: int sum_listint(listint_t *head);

	ii. if the list is empty, return 0


9. Write a function that inserts a new node at a given position.

	i. Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

	ii. where idx is the index of the list where the new node should be added. Index starts at 0

	iii. Returns: the address of the new node, or NULL if it failed

	iv. if it is not possible to add the new node at index idx, do not add the new node and return NULL


10. Write a function that deletes the node at index index of a listint_t linked list.

	i. Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);

	ii. where index is the index of the node that should be deleted. Index starts at 0

	iii. Returns: 1 if it succeeded, -1 if it failed


11. Write a function that reverses a listint_t linked list.

	i. Prototype: listint_t *reverse_listint(listint_t **head);

	ii. Returns: a pointer to the first node of the reversed list

	iii. You are not allowed to use more than 1 loop.

	iv. You are not allowed to use malloc, free or arrays

	v. You can only declare a maximum of two variables in your function


12. Write a function that prints a listint_t linked list.

	i. Prototype: size_t print_listint_safe(const listint_t *head);

	ii. Returns: the number of nodes in the list

	iii. This function can print lists with a loop

	iv. You should go through the list only once

	v. If the function fails, exit the program with status 98

	vi. Output format: see example


13. Write a function that frees a listint_t list.

	i. Prototype: size_t free_listint_safe(listint_t **h);

	ii. This function can free lists with a loop

	iii. You should go though the list only once

	iv. Returns: the size of the list that was free’d

	v. The function sets the head to NULL


14. Write a function that finds the loop in a linked list.

	i. Prototype: listint_t *find_listint_loop(listint_t *head);

	ii. Returns: The address of the node where the loop starts, or NULL if there is no loop

	iii. You are not allowed to use malloc, free or arrays

	iv. You can only declare a maximum of two variables in your function
