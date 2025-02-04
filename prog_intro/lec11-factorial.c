/* Short program for computing the factorial
   of a number. Does not handle edge-cases
   like negative numbers. */
#include <stdio.h>
#include <stdlib.h>

int factorial(int num) {
  printf("Computing: factorial(%d)\n", num);
  if (num <= 1) {
    return 1;
  } else {
    return num * factorial(num - 1);
  }
}

int main(int argc, char ** argv) {
  if (argc != 2) {
    printf("Run this program as ./factorial <num>\n");
    return 1;
  }
  int num = atoi(argv[1]);
  printf("The factorial of this number is: %d\n", factorial(num));
  return 0;
}
