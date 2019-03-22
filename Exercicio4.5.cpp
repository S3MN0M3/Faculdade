/*
Faça um algoritmo que determina o preço com desconto para entradas de cinema. Estudantes recebem
50% de desconto, aposentados, 30%. Os demais clientes pagam o ingresso completo.

Categorias: 
Estudante: E ou e
Aposentados: A ou a
Normal: N ou n
*/

#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main(){

    float valor;
    cout << "Digite o valor do ingresso: " << endl;
    cin >> valor;
    string categorias;
    cout << "(E) Estudantes, (A) Aposentados e (N) Normal: " << endl;
    cin >> categorias;
    tolower(categorias);
    cout << categorias;


    return 0;
}
