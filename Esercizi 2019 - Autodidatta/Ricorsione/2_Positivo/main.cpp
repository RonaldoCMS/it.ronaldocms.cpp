//Scrivi un metodo ricorsivo chiamandolo sd() che accetta un numero positivo intero n dispari e restituisce la somma di interi dispari da 1 a n.



#include <iostream>

using namespace std;

int sd(int MAX) {
    if(MAX == 0) return MAX;
    else {
        if(MAX % 2 == 1) {
            
        }
    }
}

int main(int argc, char const *argv[])
{

    int N;
   do {
        cout << "Inserisci numero: " << endl;
        cin >> N;
    }
    while(N < 0 || N % 2 == 0);



    return 0;
}
