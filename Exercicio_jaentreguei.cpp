#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float n1;
	float n2;
	float n3;	
	cout << "Digite o primeiro numero: " << endl;
	cin >> n1;
	cout << "Digite o segundo numero: " << endl;
	cin >> n2;
	cout << "Digite o terceiro numero: " << endl;
	cin >> n3;
	
	float soma = n1 + n2 + n3;
	cout << "A soma dos tres numeros deu: " << soma << endl;
	
	
	float media = (n1 + n2 + n3) / 3;
	cout << "A media dos numeros sao: " << media << endl;
	
	
	return 0;
}
