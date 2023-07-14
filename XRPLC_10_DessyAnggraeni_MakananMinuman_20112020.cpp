#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
	int kode, makanan, minuman, makan, minum, total, bayar, kembalian;
	char menu;
	awal :
		system ("cls");
		
	cout<<"*********************"<<endl;
	cout<<"                 PROGRAM APLIKASI RESTORAN                 "<<endl;
	cout<<"                   REKAYASA PEMBANGUNAN                    "<<endl;
	cout<<"*********************"<<endl;
	cout<<"Daftar Menu : "<<endl;
	cout<<"1. Makanan"<<endl;
	cout<<"2. Minuman"<<endl;
	cout<<"Silahkan pilih menu (1/2) : "; cin>>kode;
	if(kode==1)
	{
		cout<<"Menu Makanan : "<<endl;
		cout<<"1. Oncom Goreng   Rp 1.000,-"<<endl;
		cout<<"2. Mie Rebus      Rp 5.000,-"<<endl;
		cout<<"3. Lotek          Rp 7.000,-"<<endl;
	
		cout<<"Pilih menu makanan (1/2/3) : "; cin>>makanan;
		if(makanan==1)
		{
			cout<<"Anda memilih Oncom Goreng harga Rp 1.000,-"<<endl;
			makan = 1000;
		}
		else if(makanan==2)
		{
			cout<<"Anda memilih Mie Rebus harga Rp 5.000,-"<<endl;
			makan = 5000;
		}
		else if(makanan==3)
		{
			cout<<"Anda memilih Lotek harga Rp 7.000,-"<<endl;
			makan = 7000;
		}
		else
			cout<<"Anda salah memasukkan kode menu"<<endl;
	}
	else if(kode==2)
	{
		cout<<"Menu Minuman : "<<endl;
		cout<<"1. Coca - cola	Rp 3.000,-"<<endl;
		cout<<"2. Mijon      	RP 5.000,-"<<endl;
		cout<<"3. Teh botol  	Rp 7.000,-"<<endl;
		
		cout<<"Pilih menu minuman (1/2/3) : "; cin>>minuman;
		if(minuman==1)
		{
			cout<<"Anda memilih Coca - cola Rp 3.000,-"<<endl;
			minum = 3000;
		}
		else if(minuman==2)
		{
			cout<<"Anda memilih Mijon harga Rp 5.000,-"<<endl;
			minum = 5000;
		}
		else if(minuman==3)
		{
			cout<<"Anda memilih Teh botol harga Rp 7.000,-"<<endl;
			minum = 7000;
		}
		else
			cout<<"Anda salah memasukkan kode menu"<<endl;
	}
	else
	{
			cout<<"Anda salah memasukkan kode menu"<<endl;
	}
	cout<<"Ke menu utama (Y/N) : "; cin>>menu;
	if(menu=='Y' || menu=='y')
	{
		goto awal;
	}
	if(menu=='N' || menu=='n')
	cout<<"Anda memilih menu makanan "<<makanan<<" "<<makan<<endl;
	cout<<"Anda memilih menu minuman "<<minuman<<" "<<minum<<endl;
	
	total = makan + minum;
		cout<<"Total yang harus dibayar : "<<total<<endl;
		cout<<"Uang yang dibayar        : ";  cin>>bayar;
	
	kembalian = bayar - total;
		cout<<"Kembalian                : "<<kembalian<<endl;
	
	system ("pause");
	return 0;
}
