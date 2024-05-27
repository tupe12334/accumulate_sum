#include <stddef.h>
#include <stdio.h>

void print_array(float *array, unsigned short int size) {
  size_t i;
  for (i = 0; i < size; i++) {
    printf("%.2f ", array[i]);
  }
  printf("\n");
}