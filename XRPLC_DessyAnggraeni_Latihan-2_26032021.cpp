#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int a, b, c;
	cout<<"Program mencari nilai terbesar antara 3 buah bilangan bulat\n";
	cout<<"Masukan bilangan 1 : "; cin>>a;
	cout<<"Masukan bilangan 2 : "; cin>>b;
	cout<<"Masukan bilangan 3 : "; cin>>c;
	
	if(a>b && a>c)
	   cout<<"Nilai terbesar adalah "<<a<<endl;
	else if(b>a && b>c)
	   cout<<"Nilai terbesar adalah "<<b<<endl;
	else
	   cout<<"Nilai terbesar adalah "<<c<<endl;
	   
return 0;
}
