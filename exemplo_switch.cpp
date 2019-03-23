#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	int numero;
	cout << "Digite o numero" << endl;
	cin >> numero;
	
	//SWTICH - analisa variavel numero
	switch(numero){
		case 0: 
			cout << "Zero" << endl;		
		break;
		
		case 1:
			cout << "Um" << endl;
		break;
		
		case 2:
			cout << "Dois" << endl;
		break;
	
		default:
			cout << "Numero digitado nao registrado" << endl;
		break;
	}
	return 0;
}
