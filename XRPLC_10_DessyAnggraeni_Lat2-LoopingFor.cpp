#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int batas, loop;
	cout<<"==============================================================\n";
	cout<<"Program menampilkan bilangan kelipatan 2 dengan looping for\n";
	cout<<"===============================================================\n";
	cout<<"\n masukkan angka batas deret:";
	
	cin>>batas;
	cout<<endl;
	cout<<"   ";
	
	for(loop=0;loop<=batas;loop=loop+2)
	{
		cout<<loop<<"   ";
	}
	
	cout<<"\nselesai\n";
	
	system ("pause");
	return 0;
}
