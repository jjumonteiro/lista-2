#include <stdio.h>
#include <stdlib.h>

int main() {
 int n; // N�mero de entrada
 int r; // Resultado do deslocamento
 int i; // Contador

 printf("Digite o numero: ");
 scanf("%d", &n);

 // Utiliza um n�mero de 32 bits como base para a convers�o.
 for(i = 7; i >= 0; i--) {
    // Executa a opera��o shift right at� a �ltima posi��o da direita para cada bit.
    r = n >> i;
     if(r & 1) {
        printf("1");
     } else {
        printf("0");
     }
 }

 printf("\n");

}
