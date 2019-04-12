#include <iostream>

/*
9. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado.
*/

using namespace std;

int main(){
	int val;
	int menor;
	int maior;
	
	for(int i = 0; i < 50; i++){ // comeca no 0 vai ate 49 e o I++ faz pular de 1 em 1
		cout << "Digite o valor: " << i << endl;
		cin >> val;
	
		if(i == 0){
			menor = val;
			maior = val;
		}
	
		if(val < menor){
			menor = val;
		}
		
		if(val > maior){
			maior = val;
		}
	}

	cout << "Menor Valor: " << menor << endl;
	cout << "Maior valor: " << maior << endl;
 
	return 0;
}
