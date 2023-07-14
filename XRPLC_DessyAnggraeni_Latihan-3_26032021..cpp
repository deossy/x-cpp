#include <iostream>
#include <iostream>
using namespace std;

float konversi(char, float, char);
int main()
{
	char sumber,tujuan;
	float suhu_sumber, suhu_tujuan;
	
	cout<<"Masukkan suhu sumber : "; cin>>suhu_sumber;
	cout<<"Masukkan satuan asal : "; cin>>sumber;
	cout<<"Masukkan satuan tujuan : "; cin>>tujuan;
	
	suhu_tujuan = konversi(sumber,suhu_sumber, tujuan);
	
	return 0;
}

float konversi(char sumber, float suhu_sumber, char tujuan)
{
	float pembanding_sumber, pembanding_tujuan, suhuAwal_sumber, suhuAwal_tujuan, suhu_tujuan;
	
	switch(sumber)
	{
		case 'C' : pembanding_sumber = 5; suhuAwal_sumber = 0;
		  break;
		case 'R' : pembanding_sumber = 4; suhuAwal_sumber = 0;
		  break;
		case 'F' : pembanding_sumber = 9; suhuAwal_sumber = 32;
		  break;
	}
	
	switch(tujuan)
	{
		case 'C' : pembanding_sumber = 5; suhuAwal_sumber = 0;
		  break;
		case 'R' : pembanding_sumber = 4; suhuAwal_sumber = 0;
		  break;
		case 'F' : pembanding_sumber = 9; suhuAwal_sumber = 32;
		  break;
	}
	
	suhu_tujuan = (pembanding_tujuan / pembanding_sumber) * (suhu_sumber - suhuAwal_sumber) + suhuAwal_tujuan;
	cout<<"Hasil konversi suhu "<<suhu_sumber<<" "<<sumber<<" = "<<suhu_tujuan<<" "<<tujuan<<endl;
	
	return suhu_tujuan;
}
