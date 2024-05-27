#include "get-array-size.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void print_array(short int *array, unsigned short int size) {
  size_t i;
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
}
int *partial_sums(short int *input_array, unsigned short int array_size) {
  int *accumulated_array;

  return accumulated_array;
}

short int *get_array_values(size_t size) {
  size_t i;
  short int *input_array = (short int *)calloc(size, sizeof(short int));
  for (i = 0; i < size; i++) {
    scanf("%hd", &input_array[i]);
  }
  printf("The input array is: ");
  print_array(input_array, size);
  printf("\n");

  return input_array;
}

int main() {
  size_t arr_len;
  short int *input_array;

  arr_len = get_array_size();
  input_array = get_array_values(arr_len);

  partial_sums(input_array, arr_len);

  free(input_array);
  return 0;
}
