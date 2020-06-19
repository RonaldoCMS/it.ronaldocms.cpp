#include <iostream>

using namespace std;

int main(void)
{
	bool x=false;
	bool y=false;
	int max=0, max1=0;
	int g,m,a;
	int g1, m1, a1;
	bool zero=false;
	bool uno=false;
	bool due=false;
	char continuare;
	
	do
	{
	
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
		
		cout<<"INSERISCI UN ALTRA DATA DA VALUTARE!\n";
		system("pause");
		
		do
			{
			cout<<"Inserisci anno: ";
				cin>>a1;
				
				
				/*Condizione mese bisestile*/
				if((a1%4==0 && a1%100!=0) || a1%400==0)
				{
					y=true;
				}
			}
		
		while(a1>=2019);
		
		system("cls");
		
		do
			{
			cout<<"Inserisci mese: ";
			cin>>m1;
			
			/*Condizione giorni massimi aderente al mese*/
			switch(m1)
				{
				case 4:
				case 6:
				case 9:
				case 11:
					{
					max1=30;	
					break;
							}
				
				case 2:
				{
					if(y==true)
					{
						max1=29;
					}
					
					else
					{
						max1=28;
					}
					break;
							}
				
				default:
					{
						max1=31;
						break;
							}
				}
			}
		while(m1>12);
		
		system("cls");
		
		do
			{
			cout<<"aggiungi giorno: ";
			cin>>g1;
									}
		
		while(g1>max1);
		
		system("cls");
		
		if(a>a1)
		{
			due=true;
		}
		
		else if(a==a1)
			{
				if(m>m1)
				{
					due=true;
				}
				
				else if(m==m1)
				{
					if(g>g1)
					{
						due=true;
					}
					else if(g==g1)
					{
						zero=true;
					}
					else
					{
						uno=true;
					}
				}
			}
		else
		{
			uno=true;
		}

		if(uno==true)
		{
			cout<<"tra: "<<endl
			<<g<< "/" <<m<< "/" <<a<<endl
			<<g1<<"/"<<m1<<"/"<<a1<<endl
			<<"\nE' piu' grande la prima data.\n";
		}
		
		if(due==true)
		{
			cout<<"tra: "<<endl
			<<g<< "/" <<m<< "/" <<a<<endl
			<<g1<<"/"<<m1<<"/"<<a1<<endl
			<<"\nE' piu' grande la seconda data.\n";
		}
		
		if(zero==true)
		{
			cout<<"tra: "<<endl
			<<g<< "/" <<m<< "/" <<a<<endl
			<<g1<<"/"<<m1<<"/"<<a1<<endl
			<<"\nSono uguali..\n";
		}
		
		zero=false;
		uno=false;
		due=false;
		
		cout<<"Continuare? (s/n)\n";
		cin>>continuare;
	}
	
	while(continuare!='n');
	
	return 1;
}

	
		
			

