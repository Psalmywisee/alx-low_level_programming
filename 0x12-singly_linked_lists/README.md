Return: the number of nodes

Prototype: size_t list_len(const list_t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
You are allowed to use printf

2.Write a function that adds a new node at the beginning of a list_t list.

Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

3. Write a function that adds a new node at the end of a list_t list.

Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

4. Write a function that frees a list_t list.

Prototype: void free_list(list_t *head);

5. Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

You are allowed to use the printf function

6.bWrite a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

You are only allowed to use the printf function
You are not allowed to use interrupts
Your program will be compiled using nasm and gcc:

