//#include <iostream>
//
//using namespace std;
//
///*
//1. Escreva um algoritmo que construa um menu
//com três funções: (I) Inclusão, (A) Alteração e (T)
//Término e mostre para o usuário a opção escolhida.
//*/
//
//int main() {
//	//Declara var char
//	char op;
//	
//	//Exibe menu
//	cout << "Escolha sua opcao" << endl;
//	cout << "(I) Inclusao " << endl;
//	cout << "(A) Alteracao " << endl;
//	cout << "(T) Termino " << endl;
//	
//	//Usuario digita var op
//	cin >> op;
//	
//	//Verica se op esta entre 97 e 122
//	//Se estiver, é uma letra minuscula
//	if(op >= 97 && op <= 122){
//		//Subtrai 32 para transformar em maiuscula
//		op -= 32;
//	}
//	
//	//Limpa tela
//	system("cls");
//	
//	//Testa valor digitado
//	switch(op){
//		case 'I':
//			cout << "Inclusao" << endl;
//		break;
//		
//		case 'A':
//			cout << "Alteracao" << endl;
//		break;
//		
//		case 'T':
//			cout << "Termino" << endl;
//		break;
//		
//		default:
//			cout << "Opcao invalida" << endl;
//		break;
//	}
//		
//	return 0;
//}
#include <iostream>

using namespace std;

/*
1. Escreva um algoritmo que construa um menu
com tr�s fun��es: (I) Inclus�o, (A) Altera��o e (T)
T�rmino e mostre para o usu�rio a op��o escolhida.
*/

int main() {
	//Declara var char
	char op;
	
	//Exibe menu
	cout << "Escolha sua opcao" << endl;
	cout << "(I) Inclusao " << endl;
	cout << "(A) Alteracao " << endl;
	cout << "(T) Termino " << endl;
	
	//Usuario digita var op
	cin >> op;
	
	//Verica se op esta entre 97 e 122
	//Se estiver, � uma letra minuscula
	if(op >= 97 && op <= 122){
		//Subtrai 32 para transformar em maiuscula
		op -= 32;
	}
	
	//Limpa tela
	system("cls");
	
	//Testa valor digitado
	switch(op){
		case 'I':
			cout << "Inclusao" << endl;
		break;
		
		case 'A':
			cout << "Alteracao" << endl;
		break;
		
		case 'T':
			cout << "Termino" << endl;
		break;
		
		default:
			cout << "Opcao invalida" << endl;
		break;
	}
		
	return 0;
}
