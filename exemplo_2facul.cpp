#include <iostream>

// Como usar o \n pritando somente a variavel

using namespace std;

int main(int argc, char** argv) {
	// Variavel preco valor 200
	int preco = 200;
	// Declara a variavel desconto
	int desconto;
	// Define variavel preco_final
	int preco_final;
	// Declara variavel valor_com_juros
	int valor_com_juros;
	
	// Exibe o valor da variavel preco	
	cout << "Preco: " << preco << endl;

	// Pedindo para o usuario digitar o valor
	cout << "Digite o valor do desconto: ";
	
	// Valor digitado é armazenado na variavel desconto
	cin >> desconto;
	
	// Pritando na tela o valor do desconto
	cout << "Desconto definido: " << desconto << endl;
	
	// preco - desconto = preco_final
	preco_final = preco - desconto;
	
	// Pritando preco_final: preco - desconto = preco_final
	cout << "Preco Final: " << preco_final << endl;
	
	// Define variavel valor_parcela
	int valor_parcela;
	
	// valor_parcela = preco_final / 10
	valor_parcela = preco_final / 10;
	
	// Pritando valor_parcela
	cout << "Valor da parcela em 10x: " << valor_parcela << endl;
	
	// valor_com_juros = + 10% de preco_final
	valor_com_juros = preco_final * 10 / 100;
	
	// Print valor_com_juros
	cout << "Valor com 10% de juros: " << valor_com_juros << endl;
	
	return 0;
}
