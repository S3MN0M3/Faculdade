/*
O programa recebe um dígito de 6 a 10 e imprime na tela, este dígito, por extenso. Neste exercício a
variável dígito é do tipo caractere.
NAO CONSEGUI !
*/

#include <iostream>
using namespace std;

int main(){

    char digito[2];
    cout << "Digite um numero de 6 a 10: " << endl;
    cin >> digito;

    if ((digito >= "6") && (digito <= "10")){
        if (digito == "6"){
            cout << "SEIS" << endl;
        }
        else if(digito == "7"){
            cout << "SETE" << endl;
        }
        else if(digito == "8"){
            cout << "OITO" << endl;
        }
        else if(digito == "9"){
            cout << "NOVE" << endl;
        }
        else if(digito == "10"){
            cout << "DEZ" << endl;
        }
    }
    else{
        cout << "ERRO" << endl;
    }        

    return 0;
}
