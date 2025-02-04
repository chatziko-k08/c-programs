// Program that allocates and deallocates a 2D array of integers.

#include <stdio.h>
#include <stdlib.h>

int ** create_2d(int rows, int cols) {
  int ** array = malloc(rows * sizeof(int *));
  if (array == NULL) {
    perror("rows malloc");
    exit(1);
  }
  for(int i = 0; i < rows; i++) {
    array[i] = malloc(cols * sizeof(int));
    if (array[i] == NULL) {
      perror("cols malloc");
      exit(1);
    }
  }
  return array;
}

void free_2d(int ** array, int rows) {
  for(int i = 0; i < rows; i++) {
    free(array[i]);
  }
  free(array);
}

int main() {
  int ** array = create_2d(3, 4);
  array[0][0] = 1;
  free_2d(array, 3);
  return 0;
}
