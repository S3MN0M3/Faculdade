#include <iostream>
#include <string>
/*
Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha válida
é o número 1234. Deve ser impresso as seguintes mensagens:
ACESSO PERMITIDO caso a senha seja válida. 
ACESSO NEGADO caso a senha seja inválida.
*/

using namespace std;

int main() {
	
    string senha = "1234";
    string str;

    cout << "Digite a senha para entrar: " << endl;
    getline(cin, str);

    if(str == senha){
        cout << "ACESSO PERMITIDO" << endl;
    }
    else{
        cout << "ACESSO NEGADO" << endl;
    }
    main();
	return 0;
}
