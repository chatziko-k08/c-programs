/* Program to compute the sole pythagorean
   triplet where a + b + c == 1000. Implements
   the solution to https://projecteuler.net/problem=9
*/

#include <stdio.h>

int main() {
  // For each combination of a, b, c check
  // whether the conditions a + b + c == 1000
  // and a^2 + b^2 == c^2 are met
  for (int a = 1; a <= 1000; a++) {
    for (int b = 1; b <= 1000; b++) {
      for (int c = 1; c <= 1000; c++) {
        if ((a < b) && (b < c) && (a * a + b * b == c * c) &&
            (a + b + c == 1000)) {
          printf("a: %d\nb: %d\nc: %d\n", a, b, c);
          printf("abc:%d\n", a * b * c);
          return 0;
        }
      }
    }
  }
  return 0;
}
