#include <iostream>
using namespace std;
int main(){
	float numero = 0;
	cout << "Digite um numero: ";
	cin >> numero;
	if (numero < 0){
		numero = (numero * -1);
	}
	cout << numero;
}