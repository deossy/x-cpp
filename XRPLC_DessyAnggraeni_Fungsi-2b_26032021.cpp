#include <iostream>
#include <cstdlib>
using namespace std;

float convert(float TempFer);  //deklarasi/prototype fungsi convert
//Fungsi utama
int main()
{
	float TempFer;
	float TempCel;
	
	cout<<"Program konversi temperature Fahrenheit ke Celcius"<<endl;
	cout<<"=========================================================="<<endl;
	cout<<"Masukkan temperatur dalam Fahrenheit:";
	cin>>TempFer;
	TempCel=convert(TempFer); //Pemanggilann Fungsi
	cout<<"Hasil Konversi temperatur dalam Celcius adalah "<<TempCel<<endl;
	cout<<"Selesai";
	return 0;
}

//Definisi Fungsi convert
float convert(float TempFer)
{
	float hasil;
	
	hasil=((TempFer-32)*5)/9;
	return hasil;
}
