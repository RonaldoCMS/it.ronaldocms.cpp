/*==================================================*
Nome:			Fabio Danubbio
Titolo: 		Verificare con 3 misure il tipo di triangolo appartente

Ultima modifica: 12/04/19 19:04
*==================================================*/ 
#include <iostream>

using namespace std;

int main()
{
	float lato[2];
	int i, risp;
	
	do
	{
	
		for(i=0; i<3; i++)
		{
			cout<<"Inserisci lato: ";
			 cin>>lato[i];
		}
		
		if(lato[0] == lato[1] == lato[2])
		{
			cout<<"Equilatero\n";
		}
		
		else if(lato[0] != lato[1] != lato[2])
		{
			cout<<"Scaleno\n";
		}
		
		else
		{
			cout<<"Isoscere\n";
		}
		   getchar();
			cout<<"Riprovare? digita 1.\n";
			 cin>>risp;
			  system("cls");
	}
	while(risp==1);
	
	getchar();	
}
