#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif /*search_algos.h*/
