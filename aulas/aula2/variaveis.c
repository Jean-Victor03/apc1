#include <stdio.h>

int main() {
  char caracter; // 'a','b','c',-128 a 127  - 1 byte

  usigned char caracter_sem_sinal; // 0 a 255

  char string[10]; // "texto"
  
  int inteiro; // -2147483648 a 2147483647  - 4 bytes

  unsigned int inteiro_sem_sinal; // 0 a 4294967295

  short int inteiro_curto; // -32768 a 32767 - 2 bytes

  unsigned short int inteiro_curto_sem_sinal; // 0 a 65535

  long int inteiro_longo; // -9223372036854775808 a 9223372036854775807
  
  float flututante; // 0.123456f  - 4 bytes
  double duplo; // 0.123456789012345  - 8 bytes
  void nada; // 1 byte
  
  return 0;
}
