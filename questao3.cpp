#include <iostream>
using namespace std;
int main(){
	float F = 0; // sempre comecar com as variaveis pois pode faltar espaco pra elas
	float C = 0;
	cout << "Indique a temperatura em fahrenheit: ";
	cin >> F;
	C = ((F - 32) * 5) / 9;
	cout << "A temperatura convertida em celsius e equivalente a " << C;
}