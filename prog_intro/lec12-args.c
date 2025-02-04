// Program expects *exactly* one argument (so 2 in total including its name)
// And then proceeds iterating through all of argv and printing them as strings.
#include <stdio.h>

int main(int argc, char * argv[]) {
  if (argc != 2) {
    printf("Usage: %s num1\n", argv[0]);
    return 1;
  }
  int i;
  for(i = 0 ; i < argc ; i++) {
    printf("%s\n", argv[i]);
  }
  return 0;
}
