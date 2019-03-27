#include <iostream>
#include <math.h>
#include <iomanip>
/*
Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1:feminino 2:masculino) de
uma pessoa, construa um algoritmo que calcule e imprima seu peso ideal, utilizando as seguintes
fórmulas:
para homens: (72.7 * h)-58
para mulheres: (62.1*h)-44.7 
[Entrada] | [Entrada]
1.80 (altura) | 1.65 (altura)
2 (masculino) | 1 (feminino)

[Saída] | [Saída]
72.86 | 57.765 
*/

using namespace std;

int main() {
	
    int categoria;
    float altura;
    float peso;
    // float calculo;
    cout << "Digite sua altura: " << endl;
    cin >> altura;
    cout << "Digite seu peso: " << endl;
    cin >> peso;
    cout << "Digite 1 para Feminino e 2 para Masculino: " << endl;
    cin >> categoria;
    if(categoria == 1){
        float calculo = ((62.1 * altura) - 44.7);
        cout << fixed << setprecision(2) << "Seu peso ideal e: " << calculo << "\n";
    }
    else{
        float calculo = ((72.7 * altura) - 58);
        cout << fixed << setprecision(2) << "Seu peso ideal e: " << calculo << "\n";
    }

	return 0;
}
