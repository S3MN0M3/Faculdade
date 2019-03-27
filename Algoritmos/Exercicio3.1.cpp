#include <iostream>

/*
1) FAZER UM ALGORITIMO QUE LEIA 3 NOTAS E CALCULE A MEDIA, E VERIFIQUE SE A MEDIA É MAIOR OU IGUAL A 6
SE FOR MOSTRAR APROVADO SE NÃO MOSTRAR REROVADO

*/

using namespace std;

int main() {
	float nota_1;
	cout << "Digite a primeira nota: " << endl;
	cin >> nota_1;
	
	float nota_2;
	cout << "Digite a segunda nota: " << endl;
	cin >> nota_2;
	
	float nota_3;
	cout << "Digite a terceira nota: " << endl;
	cin >> nota_3;
	
	float semi_total = nota_1 + nota_2 + nota_3;
	float total = semi_total / 3;
	
	if ( total >= 6 )
	cout << "Aprovado!!";
	else
	cout << "Reprovado!!";
	
	return 0;
}
