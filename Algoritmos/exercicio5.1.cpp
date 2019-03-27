#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main() {
	
	float valor;
	cout << "Digite o valor: " << endl;
	cin >> valor;
	
	if (valor >= 0){
		cout << "Valor positivo" << endl;
	}
	else{
		cout << "Valor negativo" << endl;
	}
	
	return 0;
}
