#include <iostream>

#define MAX 100

using namespace std;

int main()
{
	int sp=0, sd=0;
	int n[MAX];
	int i;
	char risp;
	
		for(i=1; i<=MAX; i++)
		 {
		 	cout<<"Inserisci numero: ";
		 	cin>>n[i];
		 	
		 	if(n[i]%2==0)
		 	{
		 		cout<<"PARI\n";
		 		sp+=n[i];	
			}
			
			else
			{
				cout<<"DISPARI\n";
				sd+=n[i];
			}
			
			cout<<"Continuare?\n";
			 cin>>risp;
			  system("cls");
			 
			if(risp!='s')
			 goto exit;
		 }
	
	exit:
		
	cout<<"Somma pari: "<<sp<<endl
		<<"Somma dispari: "<<sd<<endl;
		
	getchar();
}
