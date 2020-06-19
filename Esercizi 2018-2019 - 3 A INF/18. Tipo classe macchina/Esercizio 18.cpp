/*==================================================*
Nome:			Fabio Danubbio
Titolo: 		Dato in input tipo di classe, kilometri e kili da trasportare stampare prezzo totale (C'e una tabella)

Ultima modifica: 19/02/19 22:32
*==================================================*/ 

#include <iostream>
#include <process.h>

using namespace std;

int funzione(char x, int km, int kg);

int main()

{
	
	char x;
	double km, kg, tot;
	
	cout<<"Inserisci tipo di classe: \n"
		<<"N => Normale\n"
		<<"U => Urgente\n";
			cin>>x;
			
	system("cls");
	
	cout<<"Inserisci kilometri da trascorrere: ";
		cin>>km;
		
	system("cls");
	
	cout<<"Inserisci kilogrammi da trasportare: ";
		cin>>kg;
	
	system("cls");
	
	tot=funzione(x, km, kg);
		
	
	cout<<"Risultato spedizione: "<<tot<<" euro."<<endl;	
	
	system("pause");
}

int funzione(char x, int km, int kg)
{
	
	int tot;
	
		if(x=='N')
		{
			
			if (km >= 0 && km < 100.50)
			{
				tot=kg*1;
			} 
								
			else if (km >= 100.50 && km <= 500.00)
			{
				tot=kg*1.5;
			}
			
			else if (km > 500.00)
			{
				tot=kg*2;
			}
			
			else
			{
				cout<<"Errore!";
				return false;
			}			
		}
		
		if(x=='U')
		{
			
			if (km >= 0 && km < 100.50)
			{
				
			tot=kg*1.5;
			
			} 
								
			else if (km >= 100.50 && km <= 500.00)
			{
				
				tot=kg*2;
				
			}
			
			else if (km > 500.00)
			{
				
				tot=kg*3;
				
			}
			
			else
			{
				
				cout<<"Errore!";
				return false;
				
			}	
		}
	return tot;
}
