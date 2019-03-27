/*
Escreva um algoritmo que leia o código de origem de um produto e imprima a região do mesmo,
conforme a tabela abaixo:
*/

#include <iostream>
using namespace std;

// int main(){

//     int cod;
//     cout << "Digite o codigo de origem do produto: " << endl;
//     cin >> cod;

//     if (cod == 1){
//         cout << "Sul" << endl;
//     }
//     else if(cod == 2){
//         cout << "Norte" << endl;
//     }
//     else if(cod == 3){
//         cout << "Leste" << endl;
//     }
//     else if(cod == 4){
//         cout << "Oeste" << endl;
//     }
//     else if((cod >= 5) && (cod <= 6)){
//         cout << "Nordeste" << endl;
//     }
//     else if((cod >= 7) && (cod <= 9)){
//         cout << "Sudeste" << endl;
//     }
//     else if((cod >= 10) && (cod <= 20)){
//         cout << "Centro-Oeste" << endl
//     }
//     else if((cod >= 25) && (cod <= 50)){
//         cout << "Nordeste" << endl;
//     }
//     else{
//         cout << "Produto Importado!" << endl;
//     }
//     return 0;
// }

int main(){
// EM IF / ELSE EU CONSEGUI MAS AQUI NAO TO CONSEGUINDO, DEIXEI O QUE EU FIZ E FUNCIONOU COMENTADO EM CIMA.
    char num;
    int aux;
    cout << "Digite o codigo de origem do produto: " << endl;
    cin >> aux;
    num = aux;

    switch(num){
        case 1:
        	system("cls");
            cout << "Sul" << endl;
        break;

        case 2:
            cout << "Norte" << endl;
        break;

        case 3:
            cout << "Leste" << endl;
        break;

        case 4:
            cout << "Oeste" << endl;
        break;

        case 5:
            cout << "Nordeste" << endl;
        break;

        case 6:
            cout << "Nordeste" << endl;
        break;
    }

    if((aux >= 7) && (aux <= 9)){
        cout << "Sudeste" << endl;
    }

    else if((aux >= 10) && (aux <= 20)){
        cout << "Centro-Oeste" << endl;
    }

    else if((aux >= 25) && (aux <= 50)){
        cout << "Nordeste" << endl;
    }

    else{
        cout << "Produto Importado" << endl;
    }

    main();
}
