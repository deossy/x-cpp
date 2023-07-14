#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	//deklarasi variable
	char jawab;
	float tinggi,bobot_nilai;
	
	cout<<"Persyaratan Menjadi Siswa Tk 1 SMKN ! Cimahi\n";
	cout<<"============================================\n";
	cout<<"1.Apakah Anda Bertato?(Y/T) :"; cin>>jawab;
	
	//cek kondisi pertama
	if(jawab=='t' || jawab=='T')
	{
		cout<<"2.Masukan Tinggi Badan:"; cin>>tinggi;
		
		//cek kondisi kedua
		if(tinggi>153)
		{
			cout<<"3.Masukan Bobot Nilai Anda:"; cin>>bobot_nilai;
			
			//cek kondisi ketiga
			if(bobot_nilai>=95)
			   cout<<"SELAMAT. . . Anda lulus persyaratan kami\n\n";
			else
			   cout<<"Maaf Nilai Anda tidak mencukupi\n";
		}
		else 
		   cout<<"Maaf Tinggi badan Anda tidak mencukupi syarat\n\n";
	}
	else
	{
		cout<<"Anda Gagal menjadi siswa SMKN 1 Cimahi\n";
		cout<<"Seorang SISWA DILARANG BERTATO..!\n\n";
	}
	//statment berikut dicetak di layar
	cout<<"Selesai\n\n";
	
	system ("pause");
	return 0;
	
}

