/*==================================================*
Nome:			Fabio Danubbio
Titolo: 		Realizzare un programma che dato in input un numero intero,
				visualizza la somma di tutti i numeri naturali dispari minori o uguali ad esso.
				Visualizzare anche i numeri.

Ultima modifica: 19/02/19 22:32
*==================================================*/ 

#include <iostream>

using namespace std;

int main() {
	
	
	int n;
	int i=0;
	int tot=0;
	
	cout<<"Inserisci il numero intero: ";
	cin>>n;
	
	if(n==1)
	{
		goto exit;
	}	

	if(n%2==0)
	{
		
		n=n++;	
	}
	

	while(n>1)
	{		
		n=n-2;
		
	exit:
		cout<<n<<endl;
		i++;
		tot=tot+n;
				
	}
	
	cout<<"Numeri dispari totali: "<<i<<endl;
	cout<<"somma totale: "<<tot<<endl;	
		
	return i;
}
