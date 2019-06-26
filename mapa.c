#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char RA[] = "199538356";

void preencherPonteiro(char *__ptr) {
  int index;
  for (index = 0; index < sizeof(__ptr); index++) {
    *(__ptr + index) = RA[index] - '0';
  }
}

//
void exibirRa(const char *__ptr) {
  int index;
  for (index = 0; index < sizeof(__ptr); index++) {
    printf("%i\n", __ptr[index]);
  }
}

int main() {
  char *ra = calloc(strlen(RA), sizeof(ra));
  preencherPonteiro(ra);
  exibirRa(ra);
  free(ra);
  return 0;
}