#include <stdio.h>

int main(int argc, char **argv) {
  FILE *f;
  f = fopen(argv[1], "r");
  f = fopen(argv[1], "r");
  fclose(f);

  return 0;
}