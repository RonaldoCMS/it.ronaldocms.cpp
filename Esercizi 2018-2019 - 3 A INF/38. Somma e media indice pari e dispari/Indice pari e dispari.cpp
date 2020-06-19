#include <iostream>

using namespace std;

#define MAX 10

int main()
{
	int i;
	int n=1;
	int v[MAX];
	int pari=0, dispari=0, somma_pari=0, somma_dispari=0;
	float media_pari, media_dispari;
	
	for(i=0; i<=MAX; i++)
	{
		v[i]=n;
		n+=2;
		
		if(i%2==0)
		{
			pari++;
			somma_pari+=v[i];
		}
		
		else
		{
			dispari++;
			somma_dispari+=v[i];
		}
		
		cout<<"i) "<<i<<"	//	valore:	"<<v[i]<<endl;
	}
	
	media_pari=somma_pari/(i-1);
	media_dispari=somma_dispari/(i-1);
	
	cout<<"Somma pari: "<<somma_pari
		<<"\nSomma dispari: "<<somma_dispari
		<<"\nMedia pari: "<<media_pari
		<<"\nMedia dispari: "<<media_dispari<<endl;
	
	getchar();
}
