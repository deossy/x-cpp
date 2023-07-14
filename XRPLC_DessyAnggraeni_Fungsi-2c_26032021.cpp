#include <iostream>
#include <cstdlib>
using namespace std;

long kuadrat(long l); //prototype fungsi

int main()
{
	long bil;
	
	cout<<"BIL\tKUADRAT\n";
	cout<<"=================\n";
	for(bil=200;bil<=2000;bil+=200)
	{
		cout<<bil<<"\t";
		cout<<kuadrat(bil)<<endl; //pemanggilan fungsi
	}
	
	return 0;
}

//Definisi Fungsi
long kuadrat(long l)
{
	return(l*l);
}
