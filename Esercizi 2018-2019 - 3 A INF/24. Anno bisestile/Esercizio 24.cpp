#include <iostream>

using namespace std;

int main()
{
	int a;
	char c;
	
	do
		{
		cout<<"Inserisci anno: ";
		 cin>>a;
			
			/*Condizione mese bisestile*/
			if(a%4==0  || a%400==0)
			{
				cout<<"L'anno "<<a<<" e' bisestile.\n";
			}
			
			else 
			{
				cout<<"L'anno "<<a<<" non e' bisestile.\n";
			}
															
				do
				{
				cout<<"Ricominciare? (s/n)\n";
					cin>>c;
				}
		
		while(c!='n' && c!='s');
		
		}	
		
	while(c!='n');
}
