#include <iostream>
#include <iomanip>
#include <math.h>

/*
Faça um programa em C++ que recebe 5 valores.
a = 67, b = 67.534, c = 13.657, d = 56.623, e = 24
Imprimir o valor b com 1 casa decimal;
Imprimir o valor c com 2 casas decimais;
Imprimir o valor a como caracter;
Imprimir a multiplicação de c, d, e. Somente com 2 casas decimais;
Imprimir a divisão de d por e. Com 1 casa decimal.
Imprimir o resto da divisão de a por e.
Imprimir a raiz quadrada de c, com 2 casas decimais;
Imprimir a subtração de b - c;
Imprimir a soma de a, b, c, d, com 1 casa decimal;
Imprimir a multiplicação de c, e, sem casa decimal.
*/

using namespace std;

int main() {
    int a = 67;
    float b = 67.534;
    float c = 13.657;
    float d = 56.623;
    int e = 24;

    cout << fixed << setprecision(1) << b << "\n";
    cout << fixed << setprecision(2) << c << "\n";
    cout << (char)a << "\n";
    cout << fixed << setprecision(2) << c * d * e << "\n";
    cout << fixed << setprecision(1) << d / e << "\n";
    cout << a % e << "\n";
    cout << fixed << setprecision(2) << sqrt(c) << "\n";
    cout << b - c << "\n";
    cout << fixed << setprecision(1) << a + b + c + d << "\n";
    cout << fixed << setprecision(0) << c * e << "\n";


	return 0;
}
