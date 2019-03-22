/*
O programa recebe um dígito de 0 a 5 e imprime na tela, este dígito, por extenso.
Neste exercício a variável dígito é do tipo inteiro.
*/

#include <iostream>

using namespace std;

int main(){

    int digito;
    cout << "Digite um numero de 0 a 5: " << endl;
    cin >> digito;

    if ((digito >= 0) && (digito <= 5)){
        if (digito == 0){
            cout << "ZERO" << endl;
        }
        else if(digito == 1){
            cout << "UM" << endl;
        }
        else if(digito == 2){
            cout << "DOIS" << endl;
        }
        else if(digito == 3){
            cout << "TRES" << endl;
        }
        else if(digito == 4){
            cout << "QUATRO" << endl;
        }
        else if(digito == 5){
            cout << "CINCO" << endl;
        }
    }
    else{
        cout << "ERRO" << endl;
    }

    return 0;
}
