#include <iostream>
/*
Escreva um algoritmo para ler o ano de nascimento de uma pessoa e escrever uma mensagem que
diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu). 
*/
using namespace std;

int main() {

    int ano;
    cout << "Digite o ano em que voce nasceu: " << endl;
    cin >> ano;
    int idade = 2019 - ano;
    if (idade >= 18){
        cout << "Voce pode votar." << endl;
    }
    else{
        cout << "Voce nao pode votar." << endl;
    }
	return 0;
}
