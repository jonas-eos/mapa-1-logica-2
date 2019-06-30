#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//##############################################################################
// Constantes

/// Constante com o valor prédeterminado do RA
const char RA[] = "19953835";

//##############################################################################
// Prototipos dos métodos

// Descrição:
// - Preencher um ponteiro com a constante RA por index convertendo para char de
//    forma explicita.
// Parâmetro:
// - referência __ptr: ponteiro onde será preenchido
//    com o valor de RA[]
// -__index: Posição de referência do indice
// Dependência:
// - constante RA
void preencherPonteiro(int* __ptr);

// Descrição:
// - percorre todo o vetor e realiza uma operação determinada
// Parâmetro:
// - __ptr: ponteiro que serã percorrido
// - __operacao: operação que será executada
// Dependência:
// - constante RA
void exibirRa(const int* __ptr);

//##############################################################################
// Programa principal
int main() {
  int* ra = calloc(strlen(RA), sizeof(ra));
  preencherPonteiro(ra);
  exibirRa(ra);
  free(ra);
  return 0;
}
//##############################################################################
// Definições dos métodos

//******************************************************************************
void exibirRa(const int* __ptr) {
  int index = 0;
  do {
    printf("%i\n", __ptr[index]);
  } while (++index < strlen(RA));
}

//******************************************************************************
void preencherPonteiro(int* __ptr) {
  int index;
  for (index = 0; index < strlen(RA); index++) {
    *(__ptr + index) = RA[index] - '0';
  }
}