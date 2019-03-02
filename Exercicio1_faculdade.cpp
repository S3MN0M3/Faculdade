#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int a = 5, b = -2;
	float x = 2.0, y = 3.5;
	
	cout << "a) A + B * 2 = " << (a + b) * 2 << endl;
	cout << "b) A + X = " << a + x << endl;
	cout << "c) A + B = " << a + b << endl;
	cout << "d) A * 2 / 3 = " << a * 2 / 3 << endl;
	cout << "e) A * 2 / 2 = " << a * 2 / 2 << endl;
	cout << "f) A * 2 % 3 = " << a * 2 % 3 << endl;
	cout << "g) X * 5 / A = " << x * 5 / a << endl;
	cout << "h) X * 5 % X = " << (int)x * 5 % (int)x << endl;
	cout << "i) 2 * Y / B = " << 2 * y / b << endl;
	cout << "j) A + B / 2 = " << a + b / 2 << endl;
	cout << "k) (A + B) / 2 = " << (a + b) / 2 << endl;
	cout << "l) 2 * A % 3 / 1 = " << 2 * a % 3 / 1 << endl;
	cout << "m) 2 * (A % 3) / 1 = " << 2 * (a % 3) / 1 << endl;
	cout << "n) 2 * (A % (3 / 2 )) = " << 2 * (a % (3 / 2)) << endl;
	// PROXIMO EXERCICIO
	cout << "		PROXIMO EXERCICIO !!" << endl;
	// DUVIDA
	cout << "a) X + Y / 2 = " << x + (y / 2) << endl;
	// DUVIDA
	cout << "b) X + Y / X - Y = " << x + y / x - y << endl;
	// DUVIDA
	cout << "c) X + Y / 2 = " << (x + y) / 2 << endl;
	
	a = 1;
	cout << a << endl;
	b = a + 2;
	cout << b << endl;
	x = a / b;
	cout << x << endl;
	b = b + 1;
	cout << b << endl;
	a = a - 1;
	cout << a << endl;
	y = b / 2;
	cout << y << endl;
	a = a + 2;
	cout << a << endl;
	y = b % (a + 1);
	cout << y << endl;
	b = a / 2;
	cout << b << endl;
	
	// x + y = 6; É invalido porque nao tem como atribuir um numero em duas variavel ao mesmo tempo
	
	// b = x % y; É invalido porque nao é possivel fazer cast com float
	
	// a = a + 1 Seria inválida porque nao tem os ;
	
	// y = "Blu"; É invalido porque é uma string
	
	return 0;
}
