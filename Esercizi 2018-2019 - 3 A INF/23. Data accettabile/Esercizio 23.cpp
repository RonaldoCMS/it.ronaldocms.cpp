#include <iostream>

using namespace std;

int main()
{
	bool x=false;
	int max=0;
	int g,m,a;
	
	do
		{
		cout<<"Inserisci anno: ";
			cin>>a;
			
			
			/*Condizione mese bisestile*/
			if((a%4==0 && a%100!=0) || a%400==0)
			{
				x=true;
						}
					}
	
	while(a>=2019);
	
	system("cls");
	
	do
		{
		cout<<"Inserisci mese: ";
		cin>>m;
		
		/*Condizione giorni massimi aderente al mese*/
		switch(m)
			{
			case 4:
			case 6:
			case 9:
			case 11:
				{
				max=30;	
				break;
						}
			
			case 2:
			{
				if(x==true)
				{
					max=29;
				}
				
				else
				{
					max=28;
				}
				break;
						}
			
			default:
				{
					max=31;
					break;
						}
			}
		}
	while(m>12);
	
	system("cls");
	
	do
		{
		cout<<"aggiungi giorno: ";
		cin>>g;
								}
	
	while(g>max);
	
	system("cls");
	
	cout<<g<<"\\"<<m<<"\\"<<a<<endl;
	cout<<"Data accettata.\n";
	
	system("pause");
}



