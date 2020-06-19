/*==================================================*
Nome:			Fabio Danubbio
Titolo: 		Il punteggio aggiornato della singola squadra e' calcolato in base agli esiti:
				Vittoria : 3 punti
				Pareggio : 1 punto
				Sconfitta : -1punto
				Partita non disputata: 0 punti

Ultima modifica:20/12/18
*==================================================*/ 
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	
	string nome;
	int punti, tot;
	char E;
	int V=3, P=1, S=-1, N=0;
	
	cout<<"Inserisci nome della squadra: "; cin>>nome;
	
	cout<<"Inserisci punti realizzati della squadra: "; cin>>punti;
	
	cout<<"Inserisci esito dell'ultima partita disputata: "
		<<"\n V => Vittoria"
		<<"\n P => Pareggio"
		<<"\n S => Sconfitta"
		<<"\n N => Non disputata\n";	cin>>E;
		
	switch (E)
	{
		
		case 'V': 
			punti+= V;
			break;
		
		case 'P': 
			punti+= P;
			break;
		
		case 'S': 
			punti+= S;
			break;
		
		default: 
			punti+= N;
			break;
		
	}
	
	cout<<"Punti totali realizzati dalla squadra "
	<<nome<<" sono: "<<punti<<endl;
	

	
	return 0;
}
