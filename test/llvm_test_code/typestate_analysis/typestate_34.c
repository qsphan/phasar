#include <stdio.h>
#include <stdlib.h>

void foo(FILE *f) {
  fflush(f);
  fclose(f);
}

int main(int argc, char **argv) {
  FILE *f;

  int z;

  f = fopen(argv[1], "r");

  foo(f);

  return 0;
}