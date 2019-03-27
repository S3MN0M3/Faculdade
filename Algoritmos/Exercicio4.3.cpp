//#include <iostream>
//
//using namespace std;
//
///*
//3. O programa recebe um dígito de 6 a 10 e
//imprime na tela, este dígito, por extenso.
//Neste exercício a variável dígito é do tipo
//caractere.
//*/
//
//int main() {
//	char num;
//	int aux;
//	cout << "Digite um numero de 6 a 10" << endl;
//	cin >> aux;
//	
//	num = aux;
//	
//	switch(num){
//		case 6:
//			cout << "seis" << endl;
//		break;
//		
//		case 7:
//			cout << "sete" << endl;
//		break;
//		
//		case 8:
//			cout << "oito" << endl;
//		break;
//		
//		case 9:
//			cout << "nove" << endl;
//		break;
//		
//		case 10:
//			cout << "dez" << endl;
//		break;
//		
//	}
//		
//	return 0;
//}
#include <iostream>

using namespace std;

/*
3. O programa recebe um d�gito de 6 a 10 e
imprime na tela, este d�gito, por extenso.
Neste exerc�cio a vari�vel d�gito � do tipo
caractere.
*/

int main() {
	char num;
	int aux;
	cout << "Digite um numero de 6 a 10" << endl;
	cin >> aux;
	
	num = aux;
	
	switch(num){
		case 6:
			cout << "seis" << endl;
		break;
		
		case 7:
			cout << "sete" << endl;
		break;
		
		case 8:
			cout << "oito" << endl;
		break;
		
		case 9:
			cout << "nove" << endl;
		break;
		
		case 10:
			cout << "dez" << endl;
		break;
		
	}
		
	return 0;
}
