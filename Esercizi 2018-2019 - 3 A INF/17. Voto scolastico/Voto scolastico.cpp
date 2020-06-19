/*==================================================*
Nome:			Fabio Danubbio
Titolo: 		Inversione punteggio - Classe e viceversa.

Ultima modifica: 19/02/19 22:32
*==================================================*/ 


#include <iostream>
#include <process.h>

using namespace std;

int classe()
{
	
	char classe;
	
	cout<<"Inserisci una lettera tra:\t A - B - C - D - E\n";
		cin>>classe;
		
	switch(classe)
	
	{
		
		case 'A':
		case 'a': 
		{
			cout<<"Punteggio: 9 - 10\n";
			break;
		}
		
		case 'B':
		case 'b':
		{
			cout<<"Punteggio: 8\n";
			break;
		}
	 		
	 	case 'C':
		case 'c':
		{
			cout<<"Punteggio: 7\n";
			break;
					 						}		
		
		case 'D':
		case 'd':
		{
			cout<<"Punteggio: 6";
			break;
		}
		
		case 'E':
		case 'e': 
		{
			cout<<"Punteggio: Inferiore a 6";
			break;
		}
		
	 	default:
		{
	 		cout<<"ERRORE!\n";
			break;
		}
	}
}

int punteggio()
{
	
	int punteggio;
	
	cout<<"Inserisci un numero tra:\t 1-2-3-4-5-6-7-8-9-10\n";
		cin>>punteggio;
		
	switch(punteggio)
	{
		
		case 1:
	    case 2:
		case 3:
		case 4:
		case 5:  
		{
			cout<<"Classe di merito: E\n";
			break;
		}
		
		case 6:
		{
			cout<<"Classe di merito: D\n";
			break;
		}
		
		case 7:
		{
			cout<<"Classe di merito: C\n";
			break;
		}
										
		case 8:
		{
			cout<<"Classe di merito: B\n";
			break;
		}
		
		case 9:
		case 10:
		{
			cout<<"Classe di merito: A\n";
			break;
		}
	
	 	default:
		{
	 		cout<<"ERRORE!\n";
			break;
		}
	}
}


int main()
{
	
	int x;
	int i;
	
	do
	{
	
	
	cout<<"1. Inversione Punteggio - Classe di merito\n"
		<<"2. Inversione Classe di merito - Punteggio\n";
			cin>>x;
		
	
		
	if (x==2) 
		classe();
	
	else if (x==1)
		punteggio();
	
	else 
		cout<<"Errore";
		
		
		cout<<"\nInserire 1 per iniziare di nuovo...";
		cin>>i;
		system("cls");
		
	}
	
	while(i==1);
	
	system("pause");
	return 0;
	
}
