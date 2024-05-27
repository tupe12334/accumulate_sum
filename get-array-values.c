#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void print_array(short int *array, unsigned short int size) {
  size_t i;
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
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