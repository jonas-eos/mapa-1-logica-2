// Descrição
// - A partir de uma constante do tipo char[], é preenchido um
//    ponteiro do tipo int com todo conteúdo desta constante char[]
//    em seguida é mostrado todo o conteúdo desta constante, sendo cada linha
//    uma posição deste ponteiro que foi preenchido.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// Constante com o valor prédeterminado do RA
const char RA[] = "19953835";

//******************************************************************************
// Descrição:
// - Preencher um ponteiro com a constante RA por index convertendo para char de
//    forma explicita.
// Parâmetro:
// - referência __ptr: ponteiro onde será preenchido
//    com o valor de RA[]
// Dependência:
// - constante RA
void preencherPonteiro(char *__ptr) {
  int index;
  for (index = 0; index < sizeof(__ptr); index++) {
    *(__ptr + index) = RA[index] - '0';
  }
}

//******************************************************************************
// Descrição:
// - Mostra o conteũdo do ponteiro, sendo cada linha uma posição do ponteiro
// Parâmetro:
// - constante __ptr: ponteiro que serã lido
// Dependência:
// - constante RA
void exibirRa(const char *__ptr) {
  int index;
  for (index = 0; index < sizeof(__ptr); index++) {
    printf("%i\n", __ptr[index]);
  }
}

//******************************************************************************
// Descrição:
// - Programa principal
int main() {
  char *ra = calloc(strlen(RA), sizeof(ra));
  preencherPonteiro(ra);
  exibirRa(ra);
  free(ra);
  return 0;
}