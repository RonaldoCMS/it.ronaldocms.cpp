#include<iostream>

using namespace std;

int main ()
{
	int e;
	
	cout<<"Inserisci eta': ";
	 cin>>e;
	
	if(e<=5)
	 cout<<" il biglietto e' gratuito: ";
	 
	if(e>=6 && e<=10)
	 cout<<" Il prezzo del biglietto e' di 1 euro: ";
	
	if(e>=11 && e<=17)
	 cout<<"Il prezzo del biglietto e' di 1,50 euro: ";

	if(e>=18)
     cout<<"Il prezzo del biglietto e' di 2 euro: ";
     
    cout<<endl;

	system ("pause");	
}
