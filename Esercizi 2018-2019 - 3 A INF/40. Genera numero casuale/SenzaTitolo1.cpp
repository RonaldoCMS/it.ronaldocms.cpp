#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	
	for(int i=0; i<=10; i+=1)
	{
		 cout<<rand()% 9 + 1<<endl;
	}
	
}
