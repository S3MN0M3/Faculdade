#include <iostream>

/*
3) FA�A UM ALGORITIMO QUE RECEBA O VALOR DO DEPOSITO E A QUANTIDADE DE MESES QUE O DEPOSITO FOI
FEITO
SE
- O VALOR DE DEPOSITO >= 500 E MESES >= 10 APLICA 10% DE JUROS
- O VALOR DE DEPOSITO >= 500 E MESES < 10 APLICAR 8% DE JUROS
- O VALOR DE DEPOSITO < 500 E MESES >= 10 APLICAR 4% DE JUROS
-O VALOR DE DEPOSITO <500 E MESES <10 APLICAR 2%
- MOSTRAR O VALOR DO RENDIMENTO valor do deposito com juros e o valor da % E O NOVO VALOR DO DEPOSTITO.
*/

using namespace std;

int main() {
	float valor;
	cout << "Digite o valor do deposito: " << endl;
	cin >> valor;
		
	int meses;
	cout << "Digite a quantidade de meses: " << endl;
	cin >> meses;
	
	// Testar com else{
	// if
	// && == and
	if ( valor >= 500 && meses >= 10 ){
		float juros1 = valor * 10 / 100;
		float juros1_total = valor + juros1;
		cout << "Valor com 10% de juros: " << juros1_total << " Juros: " << juros1 << endl;
	}
		
	else if ( valor >= 500 && meses < 10){
		float juros2 = valor * 8 / 100;
		float juros2_total = valor + juros2;
		cout << "Valor com 8% de juros: " << juros2_total << " Juros: " << juros2 << endl;
	}
	else if ( valor < 500 && meses >= 10 ){
		float juros3 = valor * 4 / 100;
		float juros3_total = valor + juros3;
		cout << "Valor com 4% de juros: " << juros3_total << " Juros: " << juros3 << endl;				
	}
	else if ( valor < 500 && meses < 10 ){
			float juros4 = valor * 2 / 100;
			float juros4_total = valor + juros4;
			cout << "Valor com 2% de juros: " << juros4_total << " Juros: " << juros4 << endl;
	}
	else
	{
		cout << "Deu Erro!" << endl;
	}
	
	return 0;
}