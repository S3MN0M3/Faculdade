#include <iostream>
/*
Faça um programa que leia idade e peso de um atleta e imprima a sua categoria
de acordo com a
seguinte tabela:

Idade Peso Categoria
até 12 anos - Infantil
13 a 16 anos
até 40 kg Juvenil leve
acima de 40 kg Juvenil pesado
17 a 24 anos
até 45 kg Senior leve
de 45,001 a 60 kg Senior médio
acima de 60 kg Senior pesado
acima de 24 anos - Veterano
*/

using namespace std;

int main() {
	
    int idade;
    float peso;
    cout << "Digite sua idade: " << endl;
    cin >> idade;
    cout << "Digite seu peso: " << endl;
    cin >> peso;

    if(idade <= 12){
        cout << "Sua Categoria e INFANTIL." << endl;
    }

    else if(idade >= 13 && idade <= 16 && peso <= 40){
        cout << "Sua Categoria e Juvenil Leve." << endl;
    }

    else if(idade >= 13 && idade <= 16 && peso > 40){
        cout << "Sua Categoria e Juvenil Pesado." << endl;
    }

    else if(idade >= 17 && idade <= 24 && peso <= 45){
        cout << "Sua Categoria e Senior Leve." << endl;
    }

    else if(idade >= 17 && idade <= 24 && peso > 45 && peso <= 60){
        cout << "Sua Categoria e Senior Medio." << endl;
    }

    else if(idade >= 17 && idade <= 24 && peso > 60){
        cout << "Sua Categoria e Senior Pesado." << endl;
    }

    else if(idade >= 24){
        cout << "Sua Categoria e Veterano." << endl;
    }

main();
	return 0;
}
