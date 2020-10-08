#include <iostream>

using namespace std;

int main()	{
	
	int var = 10;
	int var2 = 20;
	
	cout<<"var : " <<var<<endl
	<<"var2 : "<<var2<<endl;
	
	int* p;
	int* p2;
	int temp;
	
	p = &var;
	p2 = &var2;
	
	temp = *p;
	*p = *p2;
	*p2 = temp;
	
	cout<<"var : " <<var<<endl
	<<"var2 : "<<var2<<endl;
	
 	system("pause");
 	return 0;
}

