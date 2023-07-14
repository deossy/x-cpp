#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int batas, loop=0;
	cout<<"==============================================================\n";
	cout<<"Program menampilkan bilangan kelipatan 2 dengan Looping While\n";
	cout<<"==============================================================\n";
	cout<<"\n masukkan angka batas deret:";
	
	cin>>batas;
	cout<<endl;
	cout<<"   ";
	
	while(loop<=batas)
	{
		cout<<loop<<"   ";
		loop+=2;
	}
	
	cout<<"\nselesai\n";
	
	system ("pause");
	return 0;
}

