#include <iostream>

/*
3. Fa�a um programa que leia 20 n�meros
quaisquer e conte quantos s�o negativos.
*/

using namespace std;

int main(int argc, char** argv) {
	//Declara variaveis
	int num, negativos = 0;
	
	//Repeticao de 0 ate 19: 20 ciclos
	for(int i = 0; i < 20; i++){
		//Usuario digita valor
		cout << "Digite valor " << i << endl;
		cin >> num;
		
		//Testa se valor digitado � negativo
		if(num < 0){
			//Soma +1 na contagem de negativos
			negativos += 1;
		}
	}
	
	cout << "Total de negativos: " << negativos << endl;
	
	return 0;
}
