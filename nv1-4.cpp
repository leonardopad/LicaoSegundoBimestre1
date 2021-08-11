#include <iostream>
using namespace std;
int main(){
		int numero = 0;
		cout << "Digite um numero: ";
		cin >> numero;
		if (numero == 0 ){
			cout << numero << " e nulo";
		}else if (numero > 0){
			cout << numero << " e positivo";
		}else {
			cout << numero << " e negativo";
		}	
	}
		
