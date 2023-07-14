#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int N, bil=1;
	
	cout<<"masukkan banyak N:"; cin>>N;
	
	do
	{
		cout<<bil<<endl;
		bil++;
	}
	while(bil<=10);
	
	cout<<"\nselesai\n";
	
	system ("pause");
	return 0;
}
