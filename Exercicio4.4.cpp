/*
Escreva um algoritmo que leia o código de origem de um produto e imprima a região do mesmo,
conforme a tabela abaixo:
*/

#include <iostream>
using namespace std;

int main(){

    int cod;
    cout << "Digite o codigo de origem do produto: " << endl;
    cin >> cod;

    if (cod == 1){
        cout << "Sul" << endl;
    }
    else if(cod == 2){
        cout << "Norte" << endl;
    }
    else if(cod == 3){
        cout << "Leste" << endl;
    }
    else if(cod == 4){
        cout << "Oeste" << endl;
    }
    else if((cod >= 5) && (cod <= 6)){
        cout << "Nordeste" << endl;
    }
    else if((cod >= 7) && (cod <= 9)){
        cout << "Sudeste" << endl;
    }
    else if((cod >= 10) && (cod <= 20)){
        cout << "Centro-Oeste" << endl;
    }
    else if((cod >= 25) && (cod <= 50)){
        cout << "Nordeste" << endl;
    }
    else{
        cout << "Produto Importado!" << endl;
    }
    return 0;
}
