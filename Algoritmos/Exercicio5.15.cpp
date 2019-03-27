#include <iostream>
/*
Faça um algoritmo para ler dois números e imprimir o maior e o menor número lido, acompanhados
da mensagem Menor ou Maior, conforme o caso. Se iguais, imprimir os dois números
acompanhados da mensagem São iguais.
*/

using namespace std;

int main() {
	
    int n1, n2;
    cout << "Digite o primeiro numero: " << endl;
    cin >> n1;
    cout << "Digite o segundo numero: " << endl;
    cin >> n2;

    if(n1 > n2){
        cout << "Maior: " << n1 << endl;
        cout << "Menor: " << n2 << endl;
    }
    else if(n2 > n1){
        cout << "Maior: " << n2 << endl;
        cout << "Menor: " << n1 << endl;
    }
    else{
        cout << "Sao iguais: " << n1 << ", " << n2 << endl;
    }

	return 0;
}
