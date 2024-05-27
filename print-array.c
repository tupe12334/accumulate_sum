#include <stddef.h>
#include <stdio.h>

void print_array(int *array, unsigned short int size) {
  size_t i;
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
}