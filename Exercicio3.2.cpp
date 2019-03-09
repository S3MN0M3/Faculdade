#include <iostream>

/*
2) FAZER UM ALGORITIMO QUE RECEBA O VALOR DA COMPRA E A QUANTIDADE DE PARCELAS, CALCULE O VALOR
CADA PARCELA, SE VALOR DA PARCELA MAIOR OU IGUAL A 300 APLICAR 7% DE JUROS, SENÃO APLIQUE 4% DE
JUROS . MOSTRAR NOVO VALOR DA PARCELA


*/

using namespace std;

int main() {
	float valor;
	cout << "Digite o valor: " << endl;
	cin >> valor;
	int parcela;
	cout << "Digite o numero de parcelas: " << endl;
	cin >> parcela;
	
	float total = valor / parcela;
	float juros1 = total * 7 / 100;
	
	float juros1_total = total + juros1;
	
	float juros2 = total * 4 / 100;	
	
	float juros2_total = total + juros2;
	
	if ( total >= 300 ){
		cout << "Valor da parcela com 7% de juros: " << juros1_total << endl;
	}
	
	else{
		cout << "Valor da parcela com 4% de juros: " << juros2_total << endl;
	}
	return 0;
}
