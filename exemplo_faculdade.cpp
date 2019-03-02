#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int n1, n2;
	cout << "Digite n1, n2: " << endl;
	cin >> n1;
	cin >> n2;
	
	int soma = n1 + n2;
	cout << "Soma: " << soma << endl;
	
	int sub;
	sub = n1 -200;
	cout << "Subtracao: " << sub << endl;
	
	int mult = n2 * 5;
	cout << "Multiplicacao: " << mult <<endl;
	
	int divide = n1 / 8;
	cout << "Divisao: " << divide << endl;	
	
	// Descobrir se o numero é par ou impar, testar se o numero é primo etc etc Calcula modulo entra n1 n2
	int mod = n1 % n2;
	cout << "Modulo n1 & n2: " << mod << endl;

	return 0;
}
