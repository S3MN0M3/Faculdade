#include <iostream>

using namespace std;

int main() {
	int eleitores;
	cout << "Digite o total de eleitores: " << endl;
	cin >> eleitores;
	int votob;
	cout << "Digite o total de votos em branco: " << endl;
	cin >> votob;
	int voton;
	cout << "Digite o total de votos nulos: " << endl;
	cin >> voton;
	int votov;
	cout << "Digite o total de votos validos: " << endl;
	cin >> votov;
	int vb = votob * 100 / eleitores;
	int vn = voton * 100 / eleitores;
	int vv = votov * 100 / eleitores;
	cout << "Votos Brancos: " << vb << "%" << endl;
	cout << "Votos Nulos: " << vn << "%" << endl;
	cout << "Votos Validos: " << vv << "%" << endl;

	return 0;
}
