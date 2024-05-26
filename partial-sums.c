#include <stdio.h>
#include <stdlib.h>

void print_array(short int *array, unsigned short int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
}
int *partial_sums(int *input_array, unsigned short int array_size) {
  int *accumulated_array;

  return accumulated_array;
}

unsigned short int get_array_size() {
  unsigned short int arr_len;
  printf("Please enter the size of the array: ");
  scanf("%hu", &arr_len);
  printf("Thank, the input is: %hd\n", arr_len);
  return arr_len;
}

short int *get_array_values(unsigned short int size) {
  int i;
  short int *input_array = (short int *)calloc(size, sizeof(short int));
  for (i = 0; i < size; i++) {
    scanf("%hd", &input_array[i]);
  }
  return input_array;
}

int main() {
  unsigned short int arr_len;
  short int *input_array;

  arr_len = get_array_size();
  input_array = get_array_values(arr_len);
  print_array(input_array, arr_len);
  /*

    partial_sums(input_array, arr_len);
  */

  free(input_array);
  return 0;
}
