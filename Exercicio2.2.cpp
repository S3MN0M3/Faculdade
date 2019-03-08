#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	float arg1;
	cout << "Digite o primeiro numero: " << endl;
	cin >> arg1;
	
	float arg2;
	cout << "Digite o segundo numero: " << endl;
	cin >> arg2;
	
	float arg3;
	cout << "Digite o terceiro numero: " << endl;
	cin >> arg3;
	
	float semi_total = arg1 + arg2 + arg3 / 3;
	float total = semi_total / 3;
	
	cout << "Media = "<< total;
	return 0;
}
