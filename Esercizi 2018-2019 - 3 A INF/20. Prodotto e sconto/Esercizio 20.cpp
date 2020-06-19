#include <iostream>
#include <process.h>

using namespace std;

int main() {
	
	char risp='s';
	float tot=0, Pr_Un, Qt, Tot, Imp;
	bool i=false;
	bool j=false;
	
	
	while(risp=='s')
	{
		if(i==true)
		cout<<"Nuovo prodotto;\n\n";
	
	
			cout<<"Prezzo prodotto: ";
			cin>>Pr_Un;
			
			cout<<"quantita' del prodotto: ";
			cin>>Qt;
			
			Imp=Pr_Un*Qt;
			Tot=Tot+Imp;
	
			if(Tot>100)
			
			{	
			Tot=Tot-((Tot*20)/100);
			j=true;
			}
				
			else
			Tot=Tot-((Tot*10)/100);
	
		do
		{
			cout<<"Vuoi continuare? (s/n)\n";
			cin>>risp;
							
			if(risp!='s' && risp!= 'n')
			{
			cout<<"ERRORE\n";
			system("pause");
			}
							
			if(risp=='s')
			i=true;
									
			system("cls");
		}
													
	while (risp!='s' && risp!='n');
	
	}
	system("cls");
		
	if (j==true)
	cout<<"E' stato applicato lo sconto del 20%.\n";
	
	else
	cout<<"E' stato applicato lo sconto del 10%.\n";

	cout<<"Prezzo totale: "<<Tot<<" euro."<<endl;
	cout<<"ARRIVEDERCI E GRAZIE"<<endl;

	return 0;
}

	

