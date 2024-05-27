#include <stddef.h>
#include <stdio.h>

size_t get_array_size() {
  size_t arr_len;
  printf("Please enter the size of the array: ");
  scanf("%zu", &arr_len);
  printf("Thank, the input is: %zu\n", arr_len);
  return arr_len;
}