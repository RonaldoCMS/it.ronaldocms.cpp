#include <iostream>

using namespace std;

//Scrivi un programma che richiede all'utente la misura dell'angolo di un triangolo
//(un numero reale compreso tra 0 e 180) e comunica se l'angolo è retto, acuto o ottuso.

int main()	{
	
	int valore;
	
	do {
	
	cout << "Inserisci misura dell'angolo di un triangolo:\t";
	cin >> valore;
	}	while (valore < 0 && valore > 180);
	
	
	if(valore < 90) {
		cout << "Angolo acuto" << endl;
	}
	
	else if(valore == 90) {
		cout << "Angolo retto" << endl;
	}
	
	else {
		cout <<" Angolo ottuso";
	}
	
 	system("pause");
 	return 0;
}

