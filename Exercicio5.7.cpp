#include <iostream>

using namespace std;
/*
Ler um valor num�rico que esteja na faixa de valores de 1 at� 9. O programa deve apresentar a
mensagem �O valor est� na faixa permitida�, caso o valor informado esteja entre 1 e 9. Se o valor
estiver fora dessa faixa, o programa deve apresentar a mensagem �O valor est� fora da faixa
permitida�. 
*/
int main() {
	
	int valor;
	cout << "Digite um valor de 1 ate 9: " << endl;
	cin >> valor;
	
	if(valor >= 1 && valor <= 9){
		cout << "O valor esta na faixa permitida" << endl;
	}
	else{
		cout << "O valor esta fora da faixa permitida" << endl;
	}
	return 0;
}
