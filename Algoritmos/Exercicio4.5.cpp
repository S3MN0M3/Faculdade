/*
Faça um algoritmo que determina o preço com desconto para entradas de cinema.
Estudantes recebem
50% de desconto, 
aposentados, 30%.
Os demais clientes pagam o ingresso completo.

Categorias: 
Estudante: E ou e
Aposentados: A ou a
Normal: N ou n
*/

#include <iostream>

using namespace std;

int main(){

    char cat;
    float valor;
    cout << "Digite o valor do ingresso: " << endl;
    cin >> valor;
    system("cls");
    cout << "(E) Para Estudantes" << endl;
    cout << "(A) Para Aposentados" << endl;
    cout << "(N) Para Normal" << endl;
    cout << "Digite Sua Categoria: " << endl;
    cin >> cat;
    system("cls");

    if(cat >= 97 && cat <= 122){
        cat -= 32;
    }

    switch(cat){
        case 'E':
            cout << "Categoria Selecionada: " << endl;
            cout << "Estudantes." << endl;
            cout << "Valor com 50% de desconto: " << valor * 50 / 100 << endl;
        break;

        case 'A':
            cout << "Categoria Selecionada: " << endl;
            cout << "Aposentados." << endl;
            cout << "Valor com 30% de desconto: " << valor * 50 / 100 << endl;
        break;

        case 'N':
            cout << "Categoria Selecionada: " << endl;
            cout << "Normal." << endl;
        break;

        default:
            cout << "Categoria Incorreta." << endl;
        break;
    }

    return 0;
}
