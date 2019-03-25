#include <iostream>

/*
Acrescente ao exercício acima a mensagem ‘Você foi REPROVADO! Estude mais’ caso a média
calculada seja menor que 6,0.
*/
using namespace std;

int main() {
	
	float nota;
	float nota2;
	cout << "Digite a primeira nota: " << endl;
	cin >> nota;
	cout << "Digite a segunda nota" << endl;
	cin >> nota2;
	
	float conta = (nota + nota2) / 2;
	
	if(conta >= 6.0){
		cout << "Parabens, voce foi aprovado!" << endl;
		cout << "Sua media: " << conta;
	}
	else{
		cout << "Você foi REPROVADO! Estude mais" << endl;
		cout << "Sua media: " << conta;
	}
	
	return 0;
}
