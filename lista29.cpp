include <iostream>

using namespace std;
main(){
  	int numero, qtde;                
	
    cout << "informe um numero:";
 	cin >> numero;
 	
 	cout << "informe a quantidade:";
 	cin >> qtde;
 	
	for (int i = 0; i  <= qtde; i++){
		  cout << numero << "x"<< i << " = " << numero * i << endl;
	}
