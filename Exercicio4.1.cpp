/*
1. Escreva um algoritmo que construa um menu com três funções: (I) Inclusão, (A) Alteração e (T)
Término e mostre para o usuário a opção escolhida.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    string opc;
    cout << "Digite (I) para Inclusao, (A) Alteracao e (T) Termino: " << endl;
    cin >> opc;
    if (opc == "I"){
        cout << "Escolhido: Inclusao";
    }
    else if ( opc == "A"){
        cout << "Escolhido: Alteracao";
    }
    else if ( opc == "T"){
        cout << "Escolhido: Termino";
    }
	else{
		cout << "Erro!";
	}
    return 0;
}
