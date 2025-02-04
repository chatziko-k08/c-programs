// Program to demonstrate finding the average of a
// number of elements in an array and allocating
// elements in different kinds of memory.

#include <stdio.h>
#include <stdlib.h>

double average(int *p, int n) {
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += *(p + i);

  double av = (double)sum / n;
  return av;
}

int main(int argc, char **argv) {
  int array[100];
  int *p = array;
  average(array, 100);

  int static_array[2][2];
  int *ptr_array[2];
  ptr_array[0] = malloc(2 * sizeof(int));
  ptr_array[1] = malloc(2 * sizeof(int));

  printf("static array: %p\n", static_array);
  printf("static array[0]: %p\n", static_array[0]);
  printf("ptr array: %p\n", ptr_array);
  printf("ptr array[0]: %p\n", ptr_array[0]);
}
