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
// -__index: Posição de referência do indice
// Dependência:
// - constante RA
void preencherPonteiro(int* __ptr, int __index) {
  __ptr[__index] = RA[__index] - '0';
}

//******************************************************************************
// Descrição:
// - Mostra o conteũdo do ponteiro, sendo cada linha uma posição do ponteiro
// Parâmetro:
// - constante __ptr: ponteiro que serã lido
void exibirRa(int* __ptr, int __index) {
  printf("%i\n", __ptr[__index]);
}

//******************************************************************************
// Descrição:
// - percorre todo o vetor e realiza uma operação determinada
// Parâmetro:
// - __ptr: ponteiro que serã percorrido
// - __operacao: operação que será executada
// Dependência:
// - const RA
void percorrerVetor(int* __ptr, void (*__operacao)(int*, int)) {
  int index;
  for (index = 0; index < strlen(RA); index++) {
    __operacao(__ptr, index);
  }
}

//******************************************************************************
// Descrição:
// - Programa principal
int main() {
  int* ra = calloc(strlen(RA), sizeof(ra));
  percorrerVetor(ra, preencherPonteiro);
  percorrerVetor(ra, exibirRa);
  free(ra);
  return 0;
}