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

struct informazioni
{
	char nome[10];
	char E;

		
};
typedef struct informazioni Inf;

int main()
{
	int i_punti;
	int V=3;
	int P=2;
	int S=1;
	int N=0;
	int f_punti;

	Inf calcio;
	
	cout<<"Inserisci nome squadra calcio: ";
	 cin>>calcio.nome;
	
	cout<<"Inserisci punti attuali: ";
	 cin>>i_punti;
	 
	cout<<"Inserisci esito: ";
	 cin>>calcio.E;
	 
	 switch(calcio.E)
	 	{
	 	
	 	case 'V':
	 	    f_punti=i_punti+V;
			break;
		
		case 'P':
			f_punti=i_punti+P;
	 		break;
	 	
		 case 'S':
		 	f_punti=i_punti+S;
			break;
		
		default:
			f_punti=i_punti+N;	
	 		break;
	 	}
	
	system("cls");
	
	cout<<"Nome squadra: "<<calcio.nome<<endl;
	cout<<"Punti iniziali: "<<i_punti<<endl;
	cout<<"Punti finali: "<<f_punti<<endl; 
	
	
	return 0;
}
