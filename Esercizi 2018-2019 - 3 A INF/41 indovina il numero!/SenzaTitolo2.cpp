#include <iostream>
#include <stdlib.h>
#include <time.h>  

#define casuale rand() % 10+1

using namespace std;

int main()
{
	const int MAX = 2;
	int x[MAX];
	int flag=0;
	int i,j;
	
	srand(time(NULL));
	
	for(i=0; i<=MAX; i++)
	{
		errore:
		cout<<"Inserisci numero: [1/10] ";
		cin>>x[i];

	for(j=0; j<=MAX; j++)
	{
		if(x[i] == x[j-1])
		{
			cout<<endl<<"Hai inserito lo stesso numero di prima..! riprova."<<endl;
			goto errore;
		}
	}

		if(x[i] < 0 || x[i] > 10 )
		{
		cout<<endl<<"Errore, riprova!\n";
		goto errore;
		}
		
		else
		{
			if(casuale == x[i])
			flag++;
		}
	}
	
	if(flag > 0)
		cout<<"Hai indovinato "<<flag<<" volte!\n";
	
	else
		cout<<"Non hi indovinato neanche una volta..! :(\n";
}
