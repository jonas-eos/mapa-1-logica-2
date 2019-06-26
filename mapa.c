#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char RA[] = "19953835";

void preencherPonteiro(char *__ptr) {
  int index;
  for (index = 0; index < sizeof(__ptr); index++) {
    *(__ptr + index) = RA[index] - '0';
  }
}

int main() {
  char *ra = calloc(strlen(RA), sizeof(ra));
  preencherPonteiro(ra);
  free(ra);
  return 0;
}