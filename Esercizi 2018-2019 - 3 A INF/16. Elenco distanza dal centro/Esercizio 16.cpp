/*==================================================*
Nome:			Fabio Danubbio
Titolo: 		Dato un elenco, metri quadrati dell'appartamento e una percentuale per l'agenzia stampare totale e totale agenzia.

Ultima modifica:20/12/18
*==================================================*/ 

#include <iostream>

using namespace std;

int switch_utente(int scelta, int mq);
int percentuale(int tot, int percent);

int main()
{
	
	int scelta;
	double mq, tot, percent, tot_percent;
	
	cout<<"Elenco distanza dal centro: \n"
		<<"1. Centro\n"
		<<"2. Zona 1\n"
		<<"3. Zona 2\n"
		<<"4. Zona 3\n"
		<<"5. Periferia\n\n"
		<<"Inserisci numero :";
			cin>>scelta;
	
	cout<<"Inserisci i metri quadrati dell'appartamento: ";
		cin>>mq;
		
	cout<<"Inserisci la percentuale relativa alla provvigione spettante all'agenzia: ";
		cin>>percent;	
		
		tot=switch_utente(scelta, mq);
	
		percent=percentuale(tot, percent);
		
		cout<<"Spesa totale: "<<tot<<" euro\n";
		cout<<"Percentuale agenzia: "<<percent<<" euro\n";
	
		system("pause");
}
int switch_utente(int scelta, int mq)

{
	int tot;
	
		switch(scelta)
		{
			
			case 1:
			{
				tot=1200.00*mq;
				break;
			}
			
			case 2: 
			{
				tot=1000.00*mq;
				break;
			}
				
			case 3: 
			{
				tot=900.00*mq;
				break;
			}
					
			case 4:
			{
				tot=750.00*mq;
				break;
			}
							
			case 5: 
			{
				tot=600.00*mq;
				break;
			}
							
			default:
			{
				cout<<"Errore\n";
				system("pause");
				return false;
			}		
		
		}
		return tot;
}

int percentuale(int tot, int percent)
{
	int tot_percent;
	
	tot_percent=(tot*percent)/100;
	
	return tot_percent;
}
