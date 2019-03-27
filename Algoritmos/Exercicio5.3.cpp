#include <iostream>

/*
Escreva um algoritmo para ler as notas das duas avalia��es de um aluno no semestre, calcular e
escrever a m�dia semestral e a seguinte mensagem: �PARAB�NS! Voc� foi aprovado� somente se
o aluno foi aprovado (considere 6.0 a nota m�nima para aprova��o). 
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
		cout << "Reprovado" << endl;
		cout << "Sua media: " << conta;
	}
	
	return 0;
}