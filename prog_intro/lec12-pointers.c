// A small program to test how pointers behave
// and also how is an assignment expression
// evaluated in C.
#include <stdio.h>

int main() {
  int *p;
  int x[] = {5, 7, 2, 3, 6, 0, 1, 4};
  p = x;
  while (1) {
    printf("p: %p\n", p);
    printf("p + 2: %p\n", p + 2);
    printf("*p: %d\n", *p);
    printf("*(p+2): %d\n", *(p+2));
    printf("Value of *p = *(p+2): %d\n", *p = *(p+2));  // try to use +1000000000 instead of +2 and see what happens
    if (!(*p)) break;
    p++;
  }
  return 0;
}
