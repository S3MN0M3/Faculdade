#include <iostream>

/* 
Escreva um algoritmo para ler um valor numérico inteiro positivo ou negativo e apresentar o valor
lido como sendo um valor positivo, ou seja, se o valor lido for menor ou igual a zero, ele deve ser
multiplicado por -1.
*/


using namespace std;
int main() {
	int numero;
	cout << "Digite um valor: " << endl;
	cin >> numero;
	
	if (numero <= 0){
		int conta = numero * -1;
		cout << "Valor Multiplicado por -1: " << conta << endl;
		cout << "Valor antigo: " << numero << endl;
		cout << "Positivo" << endl;
	}
	else{
		cout << "Positivo" << endl;
	}
	return 0;
}
