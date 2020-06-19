/************************************************************************
*						Problema:										*
*Scrivere un programma che calcoli i primi 10 numeri pari quadrati		*
*cubi, la somma quadrati, dei cubi e la media quadrati, cubi.       	*
*																		*
*																		*
*************************************************************************/
#include <iostream> //libreria principale
#include <math.h> //libreria matematica
#include <process.h> //liberia per pulire cmd

using namespace std; 

int quadrato(int x); //zona calcolo quadrato
int cubo(int x); //zona calcolo cubo
int totale_quadrato(int x); //zona calcolo totale dei quadrati
int totale_cubo(int x); //zona calcolo totale cubi

int main()
{
	char ci; //riprova
	int i, LOL; //LOL > riprova2
	double N=0,q_tot=0, c_tot=0, q_media, c_media, q, c;
	
	
	/*** CICLO FINITO SOLO IN CASO SE L'UTENTE DIGITA 'n' ***/
		do
		{
			riprova_2:
			 cout<<"Inserisci quantita' di numeri: "; 
			  cin>>LOL;
			
			/*** IN CASO SE L'UTENTE INSERISCE UN VALORE MINORE DI 0 ***/
			if(LOL<=0)
			{
				cout<<"Errore, numero minore di 1\n";
				goto riprova_2;
			}
		
		/*** CALCOLI DI VARI ISTRUZIONI RICHIESTA DALL'UTENTE ***/
			for(i=1; i<=LOL; i++)
			{		
				q=quadrato(N);
				q_tot=totale_quadrato(q);
				c=cubo(N);
				c_tot=totale_cubo(c);
				
				cout<<"Numero: "<<i<<endl
				<<"Quadrato: "<<q<<endl
				<<"Cubo: "<<c<<endl
				<<"Totale quadrati: "<<q_tot<<endl
				<<"Totale cubi: "<<c_tot<<endl<<endl;
							
				N=N+2;
			}
			
			q_media=q_tot/(i-1);
			cout<<"Media totale quadrato: "<<q_media<<endl;
						
			c_media=c_tot/(i-1);
			cout<<"Media totale cubo: "<<c_media<<endl;
	
			/***IN CASO DI ERRORE DI DIGITAZIONE ***/
			riprova:
			cout<<"Riprovare? (s/n)";	
			cin>>ci;
			
			if(!(ci=='s' || ci=='n'))
			goto riprova;
				
			system("cls");		
		}
		/*** USCITA DAL ALGORITMO ***/	
	while(ci=='s');
	
	system("pause");
	return 0;
}


/*** VARI SOTTOPROGRAMMI PER LA COMPLETAZIONE DELL'ALGORITMO ***/

int quadrato(int x)
{	
	int q;
	q=pow(x,2);
	return q;
}

int cubo(int x)
{	
	int c;
	c=pow(x,3);
	return c;
}

int totale_quadrato(int x)
{
	int q_tot;
	q_tot=q_tot+x;
	return q_tot;	
}

int totale_cubo(int x)
{
	int c_tot;
	c_tot=c_tot+x;
	return c_tot;
}

