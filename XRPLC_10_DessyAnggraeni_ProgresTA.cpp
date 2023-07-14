#include <iostream> // untuk mendeklarasikan bahasa c++
#include <conio.h> // untuk pemanggilan getch
using namespace std;
int main() //Fungsi ini memberikan nilai balik menurut type datanya, dan karena memiliki nilai balik maka diberikan perintah return nilai
{
	char nama[40], alamat[30]; //digunakan untuk menampung 1 digit karakter, entah itu berupa huruf maupun angka
	int wahana, jam, tiket, tot, uang, maaf, kurang, kembali;
	awal:
	cout<<""<<endl; //fungsi standar pada C++ untuk menampilkan output ke layar
	{
	
	cout<<"======================================="<<endl; //endl adalah sebuah fungsi manipulator yang berguna untuk memasukkan karakter NewLine
	cout<<""<<endl;
	cout<<"				PAYMENT FOR RIDES		"<<endl;
	cout<<""<<endl;
	cout<<"======================================="<<endl;
	cout<<"	Masukan data diri anda "<<endl;
	cout<<"	Nama : "; cin>>nama;
	cout<<"	Alamat : "; cin>>alamat; 
	cout<<"_______________________________________"<<endl;
	cout<<"	Masukan wahana yang akan dimainkan "<<endl;
	cout<<""<<endl;
	cout<<"1. Kora-Kora"<<endl;
	cout<<""<<endl;
	cout<<"2. Ombak Banyu"<<endl;
	cout<<""<<endl;
	cout<<"3. Bianglala"<<endl;
	cout<<"________________________________________"<<endl;
	
	cout<<" PILIH SALAH SATU: "; cin>>wahana;
	cout<<""<<endl;
	}
	if (wahana==1) //sebuah struktur pemilihan yang digunakan untuk mengeksekusi sebuah kondisi
	{
		cout<<"===================================="<<endl;
		cout<<"	ANDA MEMILIH KORA-KORA"<<endl;
		cout<<"____________________________________"<<endl;
		cout<<"	Silahkan pilih jam bermain"<<endl;
		cout<<"____________________________________"<<endl;
		cout<<"	1. 	14.00 WIB"<<endl;	
		cout<<" 2. 	15.30 WIB"<<endl;
		cout<<"	3. 	16.45 WIB"<<endl;
		cout<<"	4. 	18.30 WIB"<<endl;
		cout<<" PILIH SALAH SATU: "; cin>>jam;
		
		cout<<"====================================="<<endl;
		cout<<"	PEMESANAN TIKET"<<endl;
		cout<<"	Harga Per Tiket : Rp. 10000"<<endl;
		cout<<"	Jumlah pesan tiket : "; cin>>tiket;
		tot=10000*tiket;
		cout<<"	harga total pembayaran : "<<tot<<endl;
		cout<<"	Uang Yang Dibayarkan : Rp. "; cin>>uang;
	}
	if (wahana==2)
		{
		cout<<"====================================="<<endl;
		cout<<"	ANDA MEMILIH OMBAK BANYU"<<endl;
		cout<<"====================================="<<endl;
		cout<<"	Silahkan pilih jam bermain"<<endl;
		cout<<"====================================="<<endl;
		cout<<"	1. 15.00 WIB"<<endl;	
		cout<<" 2. 16.00 WIB"<<endl;
		cout<<"	3. 17.00 WIB"<<endl;
		cout<<"	4. 19.00 WIB"<<endl;
		cout<<" PILIH SALAH SATU: "; cin>>jam;
		
		cout<<"====================================="<<endl;
		cout<<"	PEMESANAN TIKET"<<endl;
		cout<<"	Harga Per Tiket : Rp. 12000"<<endl;
		cout<<"	Jumlah pesan tiket : "; cin>>tiket;
		tot=12000*tiket;
		cout<<"	harga total pembayaran : "<<tot<<endl;
		cout<<"	Uang Yang Dibayarkan : Rp. "; cin>>uang;
	}
	if (wahana==3)
		{
		cout<<"====================================="<<endl;
		cout<<"	ANDA MEMILIH BIANGLALA"<<endl;
		cout<<"====================================="<<endl;
		cout<<"	Silahkan pilih jam bermain"<<endl;
		cout<<"====================================="<<endl;
		cout<<"	1. 19.30 WIB"<<endl;	
		cout<<" 2. 20.00 WIB"<<endl;
		cout<<"	3. 20.30 WIB"<<endl;
		cout<<"	4. 21.00 WIB"<<endl;
		cout<<" PILIH SALAH SATU: "; cin>>jam;
		
		cout<<"====================================="<<endl;
		cout<<"	PEMESANAN TIKET"<<endl;
		cout<<"	Harga Per Tiket : Rp. 15000"<<endl;
		cout<<"	Jumlah pesan tiket : "; cin>>tiket;
		tot=15000*tiket;
		cout<<"	harga total pembayaran : "<<tot<<endl;
		cout<<"	Uang Yang Dibayarkan : Rp. "; cin>>uang;
	}
	cout<<"Terimakasih telah berkunjung, selamat bersenang-senang"<<endl;
	return 0; //berfungsi untuk mengakhri eksekusi dari function tersebut, dan return juga dapat memberikan nilai pada saat akhir dari function kepada pemanggil
}
