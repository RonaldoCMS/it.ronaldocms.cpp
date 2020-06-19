/*==================================================*
Nome:			Fabio Danubbio
Titolo: 		Un gioco provede le seguenti regole:
				Bisogna giocare 4 numeri e verificare i seguenti esiti:
				-Ambo => Vincita doppia
				-Terno => Vincita tripla
				-Quaterna => Vincita Quadrupla
			In caso in cui non ci sia nessuna vincita, apparire la frase "Nessuna vincita"

Ultima modifica:20/12/18
*==================================================*/ 

#include <iostream>

#define MAX 4

using namespace std;

int main() {
	
	int num[MAX];
	int soldiUtente;
	char esito;
	bool vincita=false;
	int tot;
	
	for (int i=0; i<MAX; i++)
	{
		cout<<"Inserisci numero: "; cin>>num[i];
	}
	
		cout<<"Inserisci la tua scommessa: "; cin>>soldiUtente;
		
		cout<<"Inserisci l'esito:\n"
			<<"Inserisci A -> Ambo\n"
			<<"Inserisci T -> Terno\n"
			<<"Inserisci Q -> Quaterna\t";	cin>>esito;	
	
		switch(esito)
		{
			case 'A':
			case 'a':
				{
					vincita=true;
					tot=soldiUtente*2;
					break;
				}
			
			case 'T':
			case 't': 
				{
					vincita=true;
					tot=soldiUtente*3;
					break;
				}
			
			case 'Q':
			case 'q': 
				{
					vincita=true;
					tot=soldiUtente*4;
					break;
				}
			
			default: 
				{
					cout<<"Nessuna vincita.";
					break;
				}
		}
	
	if(vincita==true)
	{
		cout<<"Vincita: "<<tot<<endl;
	}
	
		
	cout<<"\nNumeri giocati:";
		
	for (int i=0; i<MAX; i++)
	{
		
		cout<<"\t"<<num[i];
	}
	
	return 0;	
}

