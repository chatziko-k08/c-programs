/* Small utility demonstrating the use of srand, rand,
   array initialization and looping through array elements
   to produce a metric (max element in this case).
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int bears[100];
  int i;
  int max;
  // First initialize all array values to random integers
  //  srand(time(NULL));
  srand(100);
  for(i = 0; i < 100; i++) {
    bears[i] = rand();
  }
  // Print out all integers
  for(i = 0; i < 100; i++) {
    printf("%d ", bears[i]);
  }
  printf("\n");
  // Find and the maximum integer
  max = bears[0];
  for(i = 1; i < 100; i++) {
    if(max < bears[i]) {
      max = bears[i];
    }
  }
  printf("Max found: %d\n", max);

  // things can go wrong when you write out of bounds:
  // bears[120000] = 42;
  // printf("All good %d\n", bears[120]);
  // printf("All good %d\n", bears[100]);

  return 0;
}
