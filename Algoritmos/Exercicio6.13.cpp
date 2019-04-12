#include <iostream>

/*
13. Programa para gerar e imprimir os números pares menores que 51 e sua soma. Os números devem
ser impressos em ordem decrescente
*/

using namespace std;

int main() {
	int soma;
	
	for(int i = 50; i > 0; i--){
		if(i % 2 == 0){
			cout << i << endl;
			soma += i;
		}
	}
	
	cout << "Soma total: " << soma << endl;
	
	return 0;
}
