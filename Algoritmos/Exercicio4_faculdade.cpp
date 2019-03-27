#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;
	
	a = 10;
	cout << a << endl;
	b = 20;
	cout << b << endl;
	d = a + a;
	cout << d << endl;
	c = a + b;
	cout << c << endl;
	a = b + c;
	cout << a << endl;
	d = d + 1;
	cout << d << endl;
	
	return 0;
}
