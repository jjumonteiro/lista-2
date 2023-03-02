#include <iostream>

using namespace std;
main(){
	
  	int numero, qtde,  quantidadeDeDivisores;
	  quantidadeDeDivisores = 0;        
	  
    
    printf(" Insira um numero: ");
    scanf("%d", &numero);
    
    printf("\n Divisores de %d: ", numero);
    
    
    for (int i = 1; i <= numero; ++i) {
       
        if (numero % i == 0) {
            printf(" %d ", i);
            quantidadeDeDivisores++;
        }
    } 
    
     printf("\n\n Quantidade de divisores: %d\n\n", quantidadeDeDivisores);


    return 0;
    
}





