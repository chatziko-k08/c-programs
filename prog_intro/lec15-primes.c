// A program for finding the n-th prime.
#include <stdio.h>
#include <stdlib.h>
long long int loops = 0;

int is_prime(int i) {
  int is_first = 1;
  for (int j = 2; j*j <= i; j++) {
    loops++;
    if (i % j == 0) {
      is_first = 0;
      break;
    }
  }
  return is_first;
}

int main(int argc, char **argv) {
  int counter = 0;
  int i = 2;
  int hold = 2;
  int max_prime = atoi(argv[1]);
  while (counter < max_prime) {
    if (is_prime(i) == 1) {
      counter++;
      hold = i;
    }
    i++;
  }
  printf("Prime number %d is %d\n", max_prime, hold);
  printf("Number of loops: %lld\n", loops);
  return 0;
}
