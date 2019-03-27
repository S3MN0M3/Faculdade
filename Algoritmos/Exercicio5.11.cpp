#include <iostream>

/*
Escreva um algoritmo para ler 2 valores (considere que não serão lidos valores iguais) e escreve-los
em ordem crescente.
*/

using namespace std;

int main() {
	
    int v1;
    int v2;
    cout << "Digite o primeiro valor: " << endl;
    cin >> v1;
    cout << "Digite o segundo valor: " << endl;
    cin >> v2;

    if(v1 == v2){
        cout << "Valores nao podem ser iguais." << endl;
        main();
    }
    else if(v1 < v2){
        cout << v1 << ", " << v2 << endl;
    }
    else{
        cout << v2 << ", " << v1 << endl;
    }
	
	return 0;
}
