#include <iostream>

/*
3) FAÇA UM ALGORITIMO QUE RECEBA O VALOR DO DEPOSITO E A QUANTIDADE DE MESES QUE O DEPOSITO FOI
FEITO
SE
- O VALOR DE DEPOSITO >= 500 E MESES >= 10 APLICA 10% DE JUROS
- O VALOR DE DEPOSITO >= 500 E MESES < 10 APLICAR 8% DE JUROS
- O VALOR DE DEPOSITO < 500 E MESES >= 10 APLICAR 4% DE JUROS
-O VALOR DE DEPOSITO <500 E MESES <10 APLICAR 2%
- MOSTRAR O VALOR DO RENDIMENTO "Acho que ~e o valor total de todos os meses" E O NOVO VALOR DO DEPOSTITO.
*/

using namespace std;

int main() {
	float valor;
	cout << "Digite o valor do deposito: " << endl;
	cin >> valor;
		
	int meses;
	cout << "Digite a quantidade de meses: " << endl;
	cin >> meses;
	
	
	// && == and
	if ( valor >= 500 && meses >= 10 ){
		float juros1 = valor * 10 / 100;
		float juros1_total = valor + juros1;
		cout << "Valor com 10% de juros: " << juros1_total;
	}	
	else{
		cout << "Funcinou";
	}
	return 0;
}
