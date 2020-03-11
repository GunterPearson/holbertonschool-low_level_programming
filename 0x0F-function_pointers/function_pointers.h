#ifndef FUNTION_P_
#define FUNTION_P_

int _putchar(char c);

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

#endif
