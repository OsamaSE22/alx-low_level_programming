#ifndef HEADER
#define HEADER
int _putchar(char c);
void print_name(char *name, void (*f)(char *a));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
