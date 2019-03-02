#include <iostream>

using namespace std;

int main() {
	// [Exemplo de dados de entrada]
	// 302 (temperatura em Fahrenheit)
	// [Saída para os dados de entrada acima]
	// 150 (temperatura em Celsius)
	float celsius = (302 - 32) * 5.0/9.0; 
	cout << "Temperatura em Celsius: " << celsius << endl;
	return 0;
}
