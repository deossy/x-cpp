#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int i;
	
	cout<<"Menampilkan Pengelompokan Bilangan Gebap dan Ganjil\n";
	cout<<"========================================================\n";
	cout<<"Bilangan Genap \t Bilangan Ganjil\n";
	
	for(i=0;i<20;i++)
	{
		if(i%2==0)
		 cout<<i<<"\t\t";
		else
		 cout<<i<<endl;
	}
	
	cout<<"\nSelesai\n";
	return 0;
}

