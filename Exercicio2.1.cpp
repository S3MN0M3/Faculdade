/*
1 – Faça um algoritmo que leia a quantidade de produtos vendidos em uma loja e armazene em uma variável
(intero), o preço dos produtos (float) e a quantidade de parcelas (inteiro).

mprimir o valor total da compra (quantidade de produtos vendidos * preço de cada produto), valor de cada parcela
(total da compra / quantidade de parcelas).
*/

#include <iostream>

using namespace std;

int main() {
	int quantprodutos;
	float preco;
	int parcela;
	cout << "Quantidade de produtos vendidos: " << endl;
	cin >> quantprodutos;
	cout << "Preco dos produtos: " << endl;
	cin >> preco;
	cout << "Quantidade de parcelas: " << endl;
	cin >> parcela;
	
	int total = quantprodutos * preco;
	int parcela_total = total / parcela;
	
	cout << "Valor total da compra: " << total << endl;
	cout << "Valor de cada parcela: " << parcela_total << " em " << parcela << "x";
	
	
	return 0;
}
	
