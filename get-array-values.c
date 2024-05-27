#include "print-array.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int *get_array_values(size_t size) {
  size_t i;
  int *input_array = (int *)calloc(size, sizeof(int));
  for (i = 0; i < size; i++) {
    scanf("%d", &input_array[i]);
  }
  printf("The input array is: ");
  print_array(input_array, size);
  printf("\n");

  return input_array;
}