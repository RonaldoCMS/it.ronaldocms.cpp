/*									RonaldoCMS											   */
/*------------------------------------------------------------------------------------------\
\Scrivere un programma che simuli una calcolatrice tascabile che faccia le 4 operazioni.	\
\La calcolatrice fa inserire due numeri, esegue l'operazione chiesta						\
\  (calcolare l'errore di digitazione del segno)											\
\  e fare la domanda che chieda se si vuole continuare o no 								\
\__________________________________________________________________________________________*/

#include <iostream>
#include <process.h>

using namespace std;

int main()
{
	//PARTE DICHIARATIVA
	int x, y, z=0;
	char simbolo;
	char risp='s';
	bool we=false;
	
	//RIPETIZIONE CALCOLI
	while(risp=='s') {
	
	//LEGENDA
	cout<<"Legenda: "<<endl
		<<"x+y >> Addizione"<<endl
		<<"x-y >> Sottrazione"<<endl
		<<"x/y >> divisione"<<endl
		<<"x*y >> moltiplicazione"<<endl
		<<"Esempio 3*4"<<endl<<endl;
		
		//CONDIZIONE IN CASO DI RIPETIZIONE
		if(z>1)
		cout<<"Risultato precedente: "<<z<<endl;
		
		//PER NON MOSTRARE RISULTATO SE NON SI E' SVOLTO IL CALCOLO DALL'UTENTE
		z=0;
	
	//INPUT DELL'UTENTE	
	cin>>x>>simbolo>>y;
	
	//TIPI DI ISTRUZIONI CHE PUO' COMPIERE L'UTENTE
	switch(simbolo)
	{
		case '+':
			z=x+y;
			break;
		
		case '-':
			z=x-y;
			break;
		
		case '/':
			z=x/y;
			break;
		
		case '*':
			z=x*y;
		
		default :
			cout<<"Attenzione, avrai sbagliato simbolo probabilmente...\n";
			
	}
	
	//CONDIZIONE + BOOL PER FAR USCIRE RISULTATO SE LO SWITCH NON PASSA PER DEFAULT
	if(simbolo=='+' || simbolo=='-' || simbolo=='*' || simbolo=='/')
	we=true;
	
	//CONDIZIONE OPPOSTA
	else
	we=false;
	
	//STAMPA RISULTATO SE NON PASSA SWITCH-DEFAULT
	if(we==true)
	cout<<"Risultato: "<<z<<endl;
	
	//RICOMINCIA ALGORITMO
	cout<<"\ninserisci s per fare altri calcoli, altrimenti qualsiasi tasto: ";
	cin>>risp;
	
	//PULISCI CMD
	system("cls");
}
	
	cout<<"Terminato\n";
	
	return 0;
}
