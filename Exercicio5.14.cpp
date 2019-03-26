#include <iostream>
/*
Escreva um algoritmo para ler um número inteiro (considere que serão lidos apenas valores
positivos e inteiros) e escrever se é par ou ímpar.
*/

using namespace std;

int main() {
	
    int numero;
    cout << "Digite um numero: " << endl;
    cin >> numero;
    if(numero <= 0){
        cout << "Apenas numeros inteiros! " << endl;
    }
    else if((numero % 2) == 0){
        cout << "O Numero: " << numero << " e par" << endl;
    }
    else{
        cout << "O Numero: " << numero << " e impar" << endl;
    }
	main();
	return 0;
}
