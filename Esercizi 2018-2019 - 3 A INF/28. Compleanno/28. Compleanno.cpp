#include <iostream>
#include <string.h>

#define MAX 15

using namespace std;

int main ()
{
	char Nome[MAX];
	char Cognome[MAX];
	
	int gn, m_n, a_n, g_a, m_a, a_a;

	cout<<"Nome: ";
	 cin>>Nome;
	
	cout<<"Cognome: ";
	 cin>>Cognome;
	
	cout<<"inserisci giorno di nascita ";
	cin>>gn;
	
	cout<<"inserisci mese di nascita ";
	cin>>m_n;
	
	cout<<"inserisci anno di nascita ";
	cin>>a_n;
	
	system("cls");
	
	cout<<"inserisci giorno attuale ";
	cin>>g_a;
	
	cout<<"inserisci mese attuale ";
	cin>>m_a;
	
	cout<<"inserisci anno attuale ";
	cin>>a_a;
	
	system("cls");
	
	cout<<Nome<<" "<<Cognome<<endl;
	
	if((gn&&m_n) == (g_a&&m_a))
	{
		cout<<"E' il tuo compleanno!..:)"<<endl;
	}
	
	else
	{
		cout<<"Non e' il tuo compleanno..:("<<endl;	
	}
	
	system("pause");
	return 0;	
}
