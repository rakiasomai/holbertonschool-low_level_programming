#ifndef _FUNCTION_H_
#define _FUNCTION_H_
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
