#include "print-array.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

float *get_array_values(size_t size) {
  size_t i;
  float *input_array = (float *)calloc(size, sizeof(float));
  for (i = 0; i < size; i++) {
    scanf("%f", &input_array[i]);
  }
  printf("The input array is: ");
  print_array(input_array, size);

  return input_array;
}