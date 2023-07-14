#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	
	float total_pembelian;
	float disc=0;  //discount diinisialisasi dengan nilai 0
	
	cout<<"Total pembelian Rp : "; cin>>total_pembelian;
	
	//cek kondisi
	if(total_pembelian >= 100000)
	{
		disc=0.05 * total_pembelian;
		
	}
	
	cout<<"Besarnya discount Rp. "<<disc<<endl;
	cout<<"Jadi besar pembayaran adalah Rp."<<total_pembelian-disc;
	
	system ("pause");
	return 0;
}

