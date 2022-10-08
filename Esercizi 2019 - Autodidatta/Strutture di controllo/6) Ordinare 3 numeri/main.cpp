#include <iostream>

using namespace std;

//	Scrivi un programma che richiede all'utente tre numeri reali e li visualizza in ordine crescente. Esempio:
//	Inserisci tre numeri: 8 4 10
//	I tre numeri in ordine sono: 4 8 10
//	Suggerimento: dati tre valori, esistono sei possibili modi in cui questi possono essere ordinati: abc, acb, bac, bca, cab, cba.
//	

int main()	{
	
	int v[3];
	int temp;
	
	for(int i=0; i<3; i++) {
		cout << "Inserisci numero " << i+1 << ":\t";
		cin>>v[i];
	}
	
	for(int i=0; i<3; i++) {
		for(int j=i; j<3; j++) {
			if(v[i] < v[j]) {
				
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
	
		for(int i=0; i<3; i++) {
			cout<<v[i]<<endl;
	}

 	system("pause");
 	return 0;
}

