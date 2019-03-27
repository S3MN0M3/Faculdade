#include <iostream>

/*
As maçãs custam R$ 0,30 se forem compradas menos do que uma dúzia, e R$ 0,25 se forem
compradas pelo menos doze. Escreva um algoritmo que leia o número de maçãs compradas,
calcule e escreva o valor total da compra.
*/

using namespace std;

int main() {
	
    int macas;
    float valorm = 0.30;
    float valorn = 0.25;
    cout << "Digite quantas macas quer comprar: " << endl;
    cin >> macas;
    if(macas <= 6){
        cout << "O Preco foi: R$ " << macas * valorm << endl;
    }
    else if(macas > 6 && macas <= 12){

        cout << "O Preco foi: R$ " << valorn * macas << endl;
    }
	
	return 0;
}
