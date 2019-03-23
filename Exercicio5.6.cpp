#include <iostream>

/*
Escreva um algoritmo para ler 2 valores (considere que não serão informados valores iguais) e
escrever o maior deles.
*/
using namespace std;
int main() {
	
	int valor;
	int valor2;
	cout << "Digite o primeiro valor: " << endl;
	cin >> valor;
	cout << "Digite o segundo valor: " << endl;
	cin >> valor2;
	
	if(valor == valor2){
		cout << "Digite valores diferentes." << endl;
	}
	else if(valor > valor2){
		cout << valor << endl;
	}
	else{
		cout << "Maior valor: " << valor2 << endl;
	}
	
	return 0;
}
