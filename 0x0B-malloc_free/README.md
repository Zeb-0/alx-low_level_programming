0x0B. C - malloc, free

0. Write a function that creates an array of chars, and initializes it with a specific char.
	i. Prototype: char *create_array(unsigned int size, char c);
	ii. Returns NULL if size = 0
	iii. Returns a pointer to the array, or NULL if it fails.

1. Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
	i. Prototype: char *_strdup(char *str);
	ii. The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
	iii. Returns NULL if str = NULL
	iv. On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

2. Write a function that concatenates two strings.
	i. Prototype: char *str_concat(char *s1, char *s2);
	ii. The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
	iii. if NULL is passed, treat it as an empty string
	iv. The function should return NULL on failure

3. Write a function that returns a pointer to a 2 dimensional array of integers.
	i. Prototype: int **alloc_grid(int width, int height);
	ii. Each element of the grid should be initialized to 0
	iii. The function should return NULL on failure
	iv. If width or height is 0 or negative, return NULL

4. Write a function that frees a 2 dimensional grid previously created by your alloc grid function.
	i. Prototype: void free_grid(int **grid, int height);
	ii. Note that we will compile with your alloc_grid.c file. Make sure it compiles.

5. Write a function that concatenates all the arguments of your program.
	i. Prototype: char *argstostr(int ac, char **av);
	ii. Returns NULL if ac == 0 or av == NULL
	iii. Returns a pointer to a new string, or NULL if it fails
	iv. Each argument should be followed by a \n in the new string

6. Write a function that splits a string into words.
	i. Prototype: char **strtow(char *str);
	ii. The function returns a pointer to an array of strings (words)
	iii. Returns NULL if str == NULL or str == ""
	iv. If your function fails, it should return NULL
