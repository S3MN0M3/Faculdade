#include <iostream>

/*
Escreva um algoritmo para escrever a palavra PROGRAMACAO 5 vezes
*/

using namespace std;

int main() {
	
    int i, n;
    cout << "Digite quantas vezes quer que a palavra PROGRAMACAO apareca: " << endl;
    cin >> n;
    
    for (i=0; i<n; i++) {
        cout << "PROGRAMACAO" << endl;
    }
    
    return 0;
}
