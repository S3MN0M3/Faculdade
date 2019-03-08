#include <iostream>

/*
3 – Faça um algoritmo que leia quatro números inteiros e realize as seguintes operações:
- Some 25 ao primeiro inteiro;
- Triplique o valor do segundo inteiro;
- Modifique o valor do terceiro inteiro para 12% do valor original;
- Armazene no quarto inteiro a soma dos valores originais (os que o usuário digitou) dos primeiros três inteiros + 4?
*/
using namespace std;

int main() {
	int arg1;
	cout << "Digite o primeiro numero: " << endl;
	cin >> arg1;
	int arg2;]
	cout << "Digite o segundo numero: " << endl;
	cin >> arg2;
	int arg3;
	cout << "Digite o terceiro numero: " << endl;
	cin >> arg3;
	int arg4;
	cout << "Digite o quarto numero: " << endl;
	cin >> arg4;
	
	int primeiro = arg1 + 15;
	int segundo = arg2 * 3;
	int terceiro = arg3 * 12 / 100;
	int quarto = arg1 + arg2 + arg3 + arg4;
	
	cout << "Resultado Primeiro inteiro: " << primeiro << endl;
	cout << "Resultado Segundo inteiro: " << segundo << endl;
	cout << "Resultado Terceiro inteiro: " << terceiro << "%" << endl;
	cout << "Resultado Quarto inteiro: " << quarto << endl;
	
	return 0;
}
