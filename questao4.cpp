#include <iostream>
using namespace std;
int main(){
	float C = 0;
	float K = 0;
	cout << "Indique uma temperatura em Celsius: ";
	cin >> C;
	K = C + 273.15;
	cout << "A temperatura " << C << " graus Celsius convertida e equivalente a " << K << "Kelvin";
}