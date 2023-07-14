#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int a,b,nilai;
	char nama[25],status;
	
	
	cout<<"============================"<<endl;
	cout<<"PROGRAM INPUT NILAI SISWA"<<endl;
	cout<<"============================"<<endl;
	cout<<""<<endl;
	
	do
	{
		cout<<"Berapa banyak siswa ? ";
		cin>>b;
		for(a=1;a<=b;a++)
		{
			cout<<"Masukan nama siswa ke-"<<a<<":";
			cin>>nama;
			cout<<"Nilai siswa ke-"<<a<<":";
			cin>>nilai;
			cout<<"Predikat";
			if((nilai>0)&&(nilai<=74))
			{
				cout<<"C"<<endl;
			}
			else
			if((nilai>75)&&(nilai<=90))
			{
				cout<<"B"<<endl;
			}
			else
			if((nilai>91)&&(nilai<=100))
			{
				cout<<"A"<<endl;
			}
			cout<<""<<endl;
		}
		cout<<""<<endl;
		cout<<"Coba lagi (Y/N) ? ";
		cin>>status;
		cout<<""<<endl;
		
		
	}
	while(status=='Y'||status=='y');
	system("pause");
	return 0;
}
