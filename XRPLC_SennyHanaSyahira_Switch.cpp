#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int bulan;
	
	cout<<"Masukan angka Bulan: "; cin>>bulan;
	
	switch(bulan)
	{
		case 1: cout<<"Bulan 1 adalah bulan Januari\n";
		        break;
		case 2: cout<<"Bulan 2 adalah bulan Februari\n";
		        break;
		case 3: cout<<"Bulan 3 adalah bulan Maret\n";
		        break;    
		case 4: cout<<"Bulan 4 adalah bulan April\n";
		        break;	
		case 5: cout<<"Bulan 5 adalah bulan Mei\n";
		        break;	
		case 6: cout<<"Bulan 6 adalah bulan Juni\n";
		        break;
		case 7: cout<<"Bulan 7 adalah bulan Juli\n";
		        break;
		case 8: cout<<"Bulan 8 adalah bulan Agustus\n";
		        break;    
		case 9: cout<<"Bulan 9 adalah bulan September\n";
		        break;	
		case 10: cout<<"Bulan 10 adalah bulan Oktober\n";
		        break;
		case 11: cout<<"Bulan 11 adalah bulan November\n";
		        break;	
		case 12: cout<<"Bulan 12 adalah bulan Desember\n";
		        break;				
		default: cout<<"Input data Salah..!!!\n";
		         cout<<"Masukan data harus 1-12 \n";
		         break;
	}
	
	cout<<"\nSelesai\n\n";
