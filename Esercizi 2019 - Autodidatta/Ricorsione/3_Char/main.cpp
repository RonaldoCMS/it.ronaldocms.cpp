//Scrivere un metodo ricorsivo che, dati un carattere c ed una stringa s, restituisce true se c occorre in s, false altrimenti.

#include <iostream>
#include <string.h>

using namespace std;

bool trovaCarattere(char carattere, string stringa) {
    
    if(carattere == stringa.at())
    

}

int main() {

    char c;
    string s;
    bool trovato;

    cout << "Inserisci carattere: ";
    cin >> c;

    cout << "Inserisci Stringa: ";
    cin >> s;


    trovato = trovaCarattere(c, s);

    getchar();
    return 0;
}