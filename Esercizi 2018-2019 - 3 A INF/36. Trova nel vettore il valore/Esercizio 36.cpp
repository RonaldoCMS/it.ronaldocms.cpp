/*==================================================*
Nome:			Fabio Danubbio
Titolo: 		Stabilire grandezza del vettore e un utente deve inserire un numero.
				Algoritmo dovrà controllare se esiste nel vettore e per quante volte

Ultima modifica: 12/04/19 19:03
*==================================================*/ 

#include <iostream>

using namespace std;


int main()
{
	
	
	int MAX;
	int x, i, tot=0;
	char risp;
	
	cout<<"Inserisca quantita' di valori nel vettore: ";
	 cin>>MAX;
	
	int v[MAX];
	
	for(i=0; i<MAX; i++)
	{
		cout<<"Inserisci valori per il vettore: ";
		 cin>>v[i];
	}
	
	system("cls");
	
	do
	{
		tot=0;
		
		cout<<"Inserisci valore: ";
		cin>>x;
		
		for(i=0; i<MAX; i++)
		{
			if (x==v[i])
			tot++;
		}
		
		if(tot>0)
		{
			cout<<"Il numero: "<<x<<endl
			<<"Si trova "<<tot<<" di volta/e nel vettore.\n";
		}
		
		else
		{
			cout<<"NON ESISTE QUESTO VALORE NEL VETTORE\n";
		}
		
		cout<<"Continuare? (s/n): ";
		 cin>>risp;
	}
	
	while(risp=='s');
		
	system("pause");
}

