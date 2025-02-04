// Comparing two strings using strcmp vs comparing the pointers (i.e., addresses)
// of two strings. The result is very different.

#include <stdio.h>
#include <string.h>

int main(int argc, char ** argv) {
  if (argc != 3) return 1;
  printf("strcmp(arg1, arg2): %d %d\n",
         strcmp(argv[1], argv[2]), argv[1] == argv[2]);
  return 0;
}
