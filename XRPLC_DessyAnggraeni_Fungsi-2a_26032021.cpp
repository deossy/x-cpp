#include <iostream>
#include <cstdlib>
using namespace std;


//Definisi fungsi dengan nilai kembalian bertipe integer
int penjumlahan (int a, int b)
	
{
	//deklasrasi variable
	int hasil;
		
	hasil=a+b;
	return hasil;
}

int main()
{
	int tmp;
	tmp=penjumlahan(10,3);//pemanggilan fungsi penjumlahan
	cout<<"Hasil Penjumlahan kedua bilangan adalah "<<tmp;
	return 0;
}
