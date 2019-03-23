#include <iostream>

/*
Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, calcular e
escrever a média semestral. Se a média for maior que 6.0 imprimir a mensagem “APROVADO”. Se
a média for menor que 6.0 e maior que 3.0, imprimir a mensagem “EXAME”, se a média for menor
que 3.0 imprimir a mensagem “REPROVADO”.
*/
using namespace std;
int main() {
	float nota;
	float nota2;
	cout << "Digite a primeira nota: " << endl;
	cin >> nota;
	cout << "Digite a segunda nota: " << endl;
	cin >> nota2;
	
	float media = (nota + nota2) / 2;
	
	if(media >= 6.0){
		cout << "Aprovado" << endl;
	}
	else if(media < 6.0 && media > 3.0){
		cout << "Exame" << endl;
	}
	else{
		cout << "Reprovado" << endl;
	}
		
	return 0;
}
