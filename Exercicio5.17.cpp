#include <iostream>
/*
Fazer um algoritmo para ler 3 números quaisquer e imprimir o maior deles. Se iguais, imprimir
qualquer um.
*/

using namespace std;

int main() {
	
    int n1, n2, n3;
    cout << "Digite o primeiro numero: " << endl;
    cin >> n1;
    cout << "Digite o segundo numero: " << endl;
    cin >> n2;
    cout << "Digite o terceiro numero: " << endl;
    cin >> n3;

    if(n1 == n2 && n1 == n3){
        cout << "Iguais: " << n1 << endl;
    }
    else if(n1 > n2 && n1 > n3){
        cout << "Maior: " << n1 << endl;
    }
    else if(n2 > n1 && n2 > n3){
        cout << "Maior: " << n2 << endl;
    }
    else{
        cout << "Maior: " << n3 << endl;
    }

	return 0;
}
