#include<stdio.h>
#include <locale.h>
 
	int main() {
 	setlocale(LC_ALL, "");
 	int num, i, resultado = 0;
 
    cout << Digite um n�mero:;
    cin >> numero;

 	scanf("%d", &num);
 
 	for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 	if (resultado == 0)
    cout << ("R: %d � um n�mero primo\n");
    cin >> numero;
    
 	else
 	
    cout << ("R: %d n�o � um n�mero primo\n");
    cin >> numero;
 
 	return 0;
}

