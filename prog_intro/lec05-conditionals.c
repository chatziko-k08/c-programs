#include <stdio.h>

int main() {
  int x = 43, y = 42;
  int max, min;
  if (x > y) {
         max = x;
         min = y;
  } else {
         max = y;
         min = x;
  }
  printf("%d, %d", min, max);
  return 0;
}
