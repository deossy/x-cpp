#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	char opr;
	float a,b;
	float hasil=0;
	
	cout<<"Program Kalkulator sederhana"<<endl;
	cout<<"Masukan nilai a:"; cin>>a;
	cout<<"Masukan nilai b:"; cin>>b;
	cout<<"Masukan Operator (+,-*,/} :"; cin>>opr;
	
	if(opr=='+')  //jika pencumlahan
	{
		hasil=a+b;
		cout<<"Hasil penjumlahan adalah "<<hasil<<endl;
	}
	else if(opr=='-')  //jika pengurangan
	{
		hasil=a-b;
		cout<<"Hasil pengurangan adalah "<<hasil<<endl;
	}
	else if(opr=='*')  //jika perkalian
	{
		hasil=a*b;
		cout<<"Hasil perkalian adalah "<<hasil<<endl;
	}
	else if(opr=='/')  //jika pembagian
	{
		hasil=a/b;
		cout<<"Hasil pembagian adalah "<<a/b<<endl;
	}
	else
	{
		cout<<"Maaf, Operator yg Anda masukan salah!!"<<endl;
	}
	
	cout<<"Selesai"<<endl;
	
	 system ("pause");
	 return 0;
}

