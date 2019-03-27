/*
O programa recebe um dígito de 0 a 5 e imprime na tela, este dígito, por extenso.
Neste exercício a variável dígito é do tipo inteiro.
*/

#include <iostream>

using namespace std;

// int main(){

//     int digito;
//     cout << "Digite um numero de 0 a 5: " << endl;
//     cin >> digito;

//     if ((digito >= 0) && (digito <= 5)){
//         if (digito == 0){
//             cout << "ZERO" << endl;
//         }
//         else if(digito == 1){
//             cout << "UM" << endl;
//         }
//         else if(digito == 2){
//             cout << "DOIS" << endl;
//         }
//         else if(digito == 3){
//             cout << "TRES" << endl;
//         }
//         else if(digito == 4){
//             cout << "QUATRO" << endl;
//         }
//         else if(digito == 5){
//             cout << "CINCO" << endl;
//         }
//     }
//     else{
//         cout << "ERRO" << endl;
//     }

//     return 0;
// }
int main() {
	char num;
	int aux;
	cout << "Digite um numero de 0 a 5" << endl;
	cin >> aux;
	
	num = aux;
	
	switch(num){
		case 0:
			cout << "zero" << endl;
		break;
		
		case 1:
			cout << "um" << endl;
		break;
		
		case 2:
			cout << "dois" << endl;
		break;
		
		case 3:
			cout << "tres" << endl;
		break;
		
		case 4:
			cout << "quatro" << endl;
        break;

		case 5:
			cout << "cinco" << endl;
		break;
		
	}
		
	return 0;
}
