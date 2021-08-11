#include <iostream>
using namespace std;
int main(){
	float C = 0;
	float K = 0;
	float F = 0;
	cout << "Indique uma temperatura em Fahrenheit: ";
	cin >> F;
	C = ((F - 32) * 5) / 9;
	K = C + 273.15;
	cout << "A temperatura " << F << " Fahrenheit convertida e equivalente a kelvin e " << K << "Kelvin";
}// nao esquecer a ultima chave