#include <iostream>

using namespace std;

//5! --> 1 * 2 * 3 * 4 *5;
//6! -->  1 * 2 * 3 * 4 *5;

int fattoriale(int numero) {
    if (numero == 0) {
        return 1;
    }
    else {
        cout << "Sono qui \n numero : " << numero << endl;
        return numero * fattoriale(numero-1);
    }
}

int main() {
    int numero;
    
    cout << "Inserisci numero fattoriale: " ; 
    cin >> numero;

    cout << endl << endl << endl;
    int ris = fattoriale(numero);

    cout << "Risultato:\t" << ris << endl;

    return 0;
}