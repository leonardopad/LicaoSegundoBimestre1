#include <iostream>
using namespace std;
int main(){
	int celsius = 0;
	float fahr = 0;
	cout << "indique a temperatura em celsius: ";
	cin >> celsius;
	fahr = (9 * celsius + 160) / 5;
	cout << "A temperatura " << celsius << " convertida em fahrenheit e equivalente a " << fahr;
	return 0;	
}