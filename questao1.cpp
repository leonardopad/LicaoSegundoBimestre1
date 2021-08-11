#include <iostream>
using namespace std;
int main(){
	float tempoViagem = 0;
	float velMedia = 0;// não esquecer pontos e virgulas nas variáveis
	float distancia = 0;
	float litrosUsados = 0;
	
	cout << "indique o tempo em minutos relativos a duracao da viagem: ";
	cin >> tempoViagem;
	cout << "Indique a velocidade media de viagem ";
	cin >> velMedia;
	distancia = (tempoViagem / 60) * velMedia; //não esquecer os parenteses
	litrosUsados = distancia / 12;
	
	cout << "A viagem consumiu aproximadamente " << litrosUsados << "lts.";

	return 0;	
}