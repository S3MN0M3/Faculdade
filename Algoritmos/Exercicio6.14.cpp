#include <iostream>

/*
14. Programa para ler um número N qualquer e imprimir todos os inteiros positivos menores que N, bem
como a soma e a média desses inteiros
*/

using namespace std;

int main() {
	int n, soma = 0;
	cout << "Digite o valor" << endl;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << i << endl;
		soma += i;			// += acumula valor dentro da variavel
		
	}
	
	cout << "Soma: " << soma << endl;
	cout << "Media: " << soma / n << endl;
	
	/* for invertido
	for(int i = n - 1; i >= 0; i--){
		cout << i << endl;
		soma += i;
	}
	*/
	
	return 0;
}
