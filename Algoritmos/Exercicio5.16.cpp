#include <iostream>
/*
Ler dois números inteiros. Se forem iguais, imprimir a mensagem ‘São iguais’ e terminar o
programa.<< FEITO
Se forem diferentes, e o primeiro deles for par, ler um terceiro número, imprimir o maior
valor existente entre os três e terminar;
todavia, se o primeiro for ímpar, ler mais dois números e
imprimir o maior entre os dois primeiros e o maior valor existente
entre estes dois últimos, mas de
modo que não apareçam na tela em ordem decrescente.
*/

using namespace std;

int main() {
	
    int n1, n2, n3, n4;
    cout << "Digite o primeiro numero: " << endl;
    cin >> n1;
    cout << "Digite o segundo numero: " << endl;
    cin >> n2;
    if(n1 == n2){
        cout << "Sao iguais." << endl;
    }
    else if(n1 != n2 && (n1 % 2) == 0){
        cout << "Digite um terceiro numero: " << endl;
        cin >> n3;
        if(n1 > n2 && n1 > n3){
            cout << "Maior valor entre os 3: " << n1 << endl;
        }
        else if(n2 > n1 && n2 > n3){
            cout << "Maior valor entre os 3: " << n2 << endl;
        }
        else{
            cout << "Maior valor entre os 3: " << n3 << endl;
        }
    }
    else{
        cout << "Digite um terceiro numero: " << endl;
        cin >> n3;
        cout << "Digite um quarto numero: " << endl;
        cin >> n4;
        if(n1 > n2){
            cout << "Maior entre os 2 primeiros: " << n1 << endl;
            if(n3 > n4){
                cout << "Maior entre os 2 ultimos numeros: " << n3 << endl;
            }
            else if(n4 > n3){
                cout << "Maior entre os 2 ultimos numeros: " << n4 << endl;
            }
        }
        else if(n2 > n1){
            cout << "Maior entre os 2 primeiros: " << n2 << endl;
            if(n3 > n4){
                cout << "Maior entre os 2 ultimos numeros: " << n3 << endl;
            }
            else if(n4 > n3){
                cout << "Maior entre os 2 ultimos numeros: " << n4 << endl;
            }
        }
    }
main();
	return 0;
}
