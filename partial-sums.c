#include "get-array-size.h"
#include "get-array-values.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int *partial_sums(int *input_array, unsigned short int array_size) {
  int *accumulated_array;

  return accumulated_array;
}

int main() {
  size_t arr_len;
  int *input_array;

  arr_len = get_array_size();
  input_array = get_array_values(arr_len);

  partial_sums(input_array, arr_len);

  free(input_array);
  return 0;
}
