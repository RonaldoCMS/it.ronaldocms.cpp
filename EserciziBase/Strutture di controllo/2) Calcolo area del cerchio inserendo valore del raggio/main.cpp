#include <iostream>

using namespace std;

//Scrivi un programma che consenta di calcolare l'area del cerchio in base al valore del raggio.
//Il programma dovrà quindi richiedere all'utente il valore del raggio
//(un numero reale) e mostrare l'area del cerchio corrispondente.

int main()	{
	
	int valore;
	double PI_GREGO = 3.14;
	
	cout << "Inserisci valore del raggio:\t";
	cin>>valore;
	
	cout << "Risultato :\t" << PI_GREGO * (valore * valore) << endl;
	
 	system("pause");
 	return 0;
}

