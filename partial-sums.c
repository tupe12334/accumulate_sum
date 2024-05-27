#include "get-array-size.h"
#include "get-array-values.h"
#include "print-array.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

float *partial_sums(float *input_array, size_t array_size) {
  size_t i;
  float *accumulated_array = (float *)calloc(array_size, sizeof(float));
  for (i = 0; i < array_size; i++) {
    if (i == 0) {
      accumulated_array[i] = input_array[i];
    }
    accumulated_array[i] = accumulated_array[i - 1] + input_array[i];
  }

  return accumulated_array;
}

int main() {
  size_t arr_len;
  float *input_array;
  float *accumulated_array;

  arr_len = get_array_size();
  input_array = get_array_values(arr_len);

  accumulated_array = partial_sums(input_array, arr_len);

  printf("The accumulated array is: ");
  print_array(accumulated_array, arr_len);

  free(input_array);
  free(accumulated_array);
  return 0;
}
