#include <iostream>
#include <math.h>
#include <iomanip>
/*
Uma loja de eletrodomésticos estabeleceu as seguintes modalidades de pagamento para a venda
de suas mercadorias:
À vista ................................ desconto de 2,5% sobre o preço de tabela;
De 2 até 5 vezes ................ preço de tabela, sem desconto ou acréscimo;
De 6 até 10 vezes .............. juros de 6% sobre o preço de tabela;
De 11 até 15 vezes ............ juros de 13% sobre o preço de tabela.

Exemplo: preço de tabela = R$ 100,00, para pagamento em 8 vezes;
 preço total = 100,00 + 6,00 (6% de 100,00) = 106,00;
 cada parcela = 106,00 / 8 = R$ 13,25.
 O programa deve ler o preço de tabela e o número de vezes em que o pagamento será feito, e
calcular o valor de cada parcela e o preço total da compra.
 Exibir, na tela, como segue:
PREÇO DE TABELA: R$ XXXXXXXXX
NUM. DE VEZES: XX
VALOR DE CADA PARCELA: R$ XXXXXXXXX
PREÇO TOTAL: R$ XXXXXXXXX

*/

using namespace std;

int main() {
	
    float tabela;
    int nvz;
    cout << "Digite o valor da tabela: " << endl;
    cin >> tabela;
    cout << "Digite o numero de vezes" << endl;
    cin >> nvz;

    if(nvz >= 0 && nvz <= 1){
        float desconto = tabela * 2.5 / 100;
        cout << "Preco de tabela = R$ " << tabela << endl;
        cout << "Num. de vezes: " << nvz << endl;
        cout << "Valor de cada parcela : R$ 0" << endl;
        cout << "Preco total: R$ " << tabela - desconto << endl;       
    }

    else if(nvz >= 2 && nvz <= 5){
        cout << "Preco de tabela = R$ " << tabela << endl;
        cout << "Num. de vezes: " << nvz << endl;
        cout << fixed << setprecision(2) << "Valor de cada parcela : R$ " << tabela / nvz << endl;
        cout << "Preco total: R$ " << tabela << endl;
    }

    else if(nvz >= 6 && nvz <= 10){
        float juros = tabela * 6.0 / 100;
        float jurostotal = tabela + juros;
        cout << "Preco de tabela = R$ " << tabela << endl;
        cout << "Num. de vezes: " << nvz << endl;
        cout << fixed << setprecision(2) << "Valor de cada parcela : R$ " << jurostotal / nvz << endl;
        cout << "Preco total: R$ " << tabela + juros << endl;
    }

    else if(nvz >= 11 && nvz <= 15){
        float juros = tabela * 13 / 100;
        float jurostotal = tabela + juros;
        cout << "Preco de tabela = R$ " << tabela << endl;
        cout << "Num. de vezes: " << nvz << endl;
        cout << fixed << setprecision(2) << "Valor de cada parcela : R$ " << jurostotal / nvz << endl;
        cout << "Preco total: R$ " << tabela + juros << endl;
    }
    else{
        cout << "Erro" << endl;
    }
	return 0;
}
