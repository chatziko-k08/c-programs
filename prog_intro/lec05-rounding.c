#include <stdio.h>

int myround(double x) {
  int first = (int) x;
  double result = (x - first >= 0.5) ? first + 1 : first;
  return result;
}

int main() {
   printf("%d\n", myround(42.67));
   printf("%d\n", myround(42.499999));
   printf("%d\n", myround(42.99));
   printf("%d\n", myround(42.50000001));
   return 0;
}
