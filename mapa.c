#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char RA[] = "19953835";

int main() {
  char *ra = calloc(strlen(RA), sizeof(ra));
  free(ra);
  return 0;
}