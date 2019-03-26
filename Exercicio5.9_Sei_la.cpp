#include <iostream>
/*
Ler três valores para os lados de um triângulo: A, B e C. Verificar se os lados fornecidos formam
realmente um triângulo. Se formar, deve ser indicado o tipo de triângulo: Isósceles, escaleno ou
eqüilátero.
Para verificar se os lados fornecidos formam triângulo: A < B + C e B < A + C e C < A + B
Triângulo isósceles: possui dois lados iguais (A=B ou A=C ou B = C)
Triângulo escaleno: possui todos os lados diferentes (A<>B e B <> C)
Triângulo eqüilátero: possui todos os lados iguais (A=B e B=C)
*/
using namespace std;

int main(){

    float A;
    float B;
    float C;
    cout << "Digite o valor a: " << endl;
    cin >> A;
    cout << "Digite o valor b: " << endl;
    cin >> B;
    cout << "Digite o valor c: " << endl;
    cin >> C;

    if((A < B) + C && (B < A) + C && (C < A) + B){
        if(A == B || A == C || B == C){
            cout << "Triangulo isosceles" << endl;
        }
            if(A != B && B != C){
                cout << "Triangulo escaleno" << endl;
            }
                if(A == B && B == C){
                    cout << "Triangulo equilatero" << endl;
                }
    }
    else{
        cout << "Valores invalidos para formar um triangulo" << endl;
    }
    return 0;
}