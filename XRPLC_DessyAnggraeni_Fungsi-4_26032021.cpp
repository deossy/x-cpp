#include <iostream>
#include <cstdlib>
using namespace std;

int tambah(int a,int b);
float bagi(int a,int b);
int kali(int a,int b);

int main()
{
	char jawaban;
	int pilihan,bil1,bil2;
	
	cout<<"OPERASI ARITMATIKA";
	do
	{
		cout<<"\n=========MENU=========\n";
		cout<<"[1]Operasi Tambah\n";
		cout<<"[2]Operasi Bagi\n";
		cout<<"[3]Operasi Kali\n";
		cout<<"========================\n";
		cout<<"Masukkan pilihan: "; cin>>pilihan;
		cout<<"Masukkan Bil-1: "; cin>>bil1; 
		cout<<"Masukkan Bil-2: "; cin>>bil2;
		
		switch(pilihan)
		{
			case 1: cout<<"Hasil Penjumlahannya adalah: "<<tambah(bil1,bil2);
					break;
			case 2: cout<<"Hasil Pembagiannya adalah: "<<bagi(bil1,bil2);
					break;
			case 3: cout<<"Hasil Perkaliannya adalah: "<<kali(bil1,bil2);
					break;
			default: cout<<"Anda salah memasukkan pilihan. Pilihan harus 1-3\n";
		}
		cout<<"\nApakah ingin mengulang? [Y/T]: "; cin>>jawaban;
	}while(jawaban=='y'||jawaban=='Y');
	cout<<"Selesai\n";
	return 0;
}
int tambah(int a,int b)
{
	return (a+b);
}
float bagi(int a, int b)
{
	float hasil;
	hasil=(float)a/b;
	return(hasil);
}
int kali(int a,int b)
{
	return (a*b);
}
