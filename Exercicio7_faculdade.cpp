#include <iostream>

using namespace std;

int main() {
	int eleitores = 200;
	int votob = 10;
	int voton = 20;
	int votov = 160;
	int vb = 100 * votob / 200;
	int vn = 100 * voton / 200;
	int vv = 100 * votov / 200;
	cout << "Votos Brancos: " << vb << "%" << endl;
	cout << "Votos Nulos: " << vn << "%" << endl;
	cout << "Votos Validos: " << vv << "%" << endl;
	return 0;
}
