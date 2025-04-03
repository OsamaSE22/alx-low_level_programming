# README - 0x12. C - Singly Linked Lists

## Project Overview
This project focuses on singly linked lists in C, covering their implementation and use cases. The goal is to develop an understanding of when and why to use linked lists versus arrays and how to build and manipulate linked lists.

## Learning Objectives
By the end of this project, you should be able to:
- Explain the advantages and disadvantages of linked lists compared to arrays.
- Implement and use singly linked lists in C.

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`.
- All files compiled on Ubuntu 20.04 LTS using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files should end with a new line.
- Code must follow the Betty coding style.
- No global variables allowed.
- No more than 5 functions per file.
- Only `malloc`, `free`, and `exit` from the C standard library are allowed.
- `_putchar` is allowed but does not need to be pushed.
- Header file `lists.h` must include function prototypes and include guards.

## Data Structure
This project uses the following data structure:
```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Tasks
### 0. Print List
- Function: `size_t print_list(const list_t *h);`
- Prints all elements of a `list_t` list.
- Returns the number of nodes.

### 1. List Length
- Function: `size_t list_len(const list_t *h);`
- Returns the number of elements in a `list_t` list.

### 2. Add Node
- Function: `list_t *add_node(list_t **head, const char *str);`
- Adds a new node at the beginning of a `list_t` list.
- Returns the address of the new element, or `NULL` if it fails.
- The string must be duplicated.

### 3. Add Node at the End
- Function: `list_t *add_node_end(list_t **head, const char *str);`
- Adds a new node at the end of a `list_t` list.
- Returns the address of the new element, or `NULL` if it fails.

### 4. Free List
- Function: `void free_list(list_t *head);`
- Frees a `list_t` list.

## Getting Started
1. Clone the repository:
   ```sh
   git clone <repository-url>
   cd alx-low_level_programming/0x12-singly_linked_lists
   ```
2. Compile your files with:
   ```sh
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <filename>.c -o <output>
   ```
3. Run the executable:
   ```sh
   ./<output>
   ```

## License
This project follows the ALX guidelines. Do not share or publish the content.

For any questions, refer to the ALX platform or community discussions.


